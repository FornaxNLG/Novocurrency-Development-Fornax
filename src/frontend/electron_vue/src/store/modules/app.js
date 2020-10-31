import AppStatus from "../../AppStatus";
import { Menu } from "electron";

function EnableDebugWindowOnCoreReady() {
  try {
    let menu = Menu.getApplicationMenu();
    if (menu === null) return;
    menu.items
      .find(x => x.label === "Help")
      .submenu.items.find(x => x.label === "Debug window").enabled = true;
  } catch (e) {
    console.error(e);
  }
}

const app = {
  namespaced: true,
  state: {
    coreReady: false,
    progress: 0,
    status: AppStatus.start,
    unityVersion: null,
    walletExists: null,
    walletVersion: null
  },
  mutations: {
    SET_CORE_READY(state) {
      state.coreReady = true;
    },
    SET_PROGRESS(state, progress) {
      state.progress = progress;
    },
    SET_STATUS(state, status) {
      if (state.status === AppStatus.shutdown) return; // shutdown in progress, do not switch to other status
      state.status = status;
    },
    SET_UNITY_VERSION(state, version) {
      state.unityVersion = version;
    },
    SET_WALLET_EXISTS(state, walletExists) {
      state.walletExists = walletExists;
    },
    SET_WALLET_VERSION(state, version) {
      state.walletVersion = version;
    }
  },
  actions: {
    SET_CORE_READY({ commit }) {
      commit("SET_STATUS", AppStatus.ready); // set status to ready. maybe core_ready is redundant and can be removed.
      commit("SET_CORE_READY");
      EnableDebugWindowOnCoreReady();
    },
    SET_PROGRESS({ commit }, progress) {
      commit("SET_PROGRESS", progress);
    },
    SET_STATUS({ commit }, status) {
      commit("SET_STATUS", status);
    },
    SET_UNITY_VERSION({ commit }, version) {
      commit("SET_UNITY_VERSION", version);
    },
    SET_WALLET_EXISTS({ commit }, walletExists) {
      let status = walletExists ? AppStatus.synchronize : AppStatus.setup;
      commit("SET_STATUS", status);
      commit("SET_WALLET_EXISTS", walletExists);
    },
    SET_WALLET_VERSION({ commit }, version) {
      commit("SET_WALLET_VERSION", version);
    }
  }
};

export default app;
