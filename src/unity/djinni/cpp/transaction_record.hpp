// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from libunity.djinni

#pragma once

#include "output_record.hpp"
#include "transaction_status.hpp"
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

struct TransactionRecord final {
    std::string txHash;
    int64_t timestamp;
    int64_t amount;
    int64_t fee;
    TransactionStatus status;
    int32_t height;
    int64_t blocktime;
    int32_t depth;
    std::vector<OutputRecord> receivedOutputs;
    std::vector<OutputRecord> sentOutputs;

    TransactionRecord(std::string txHash_,
                      int64_t timestamp_,
                      int64_t amount_,
                      int64_t fee_,
                      TransactionStatus status_,
                      int32_t height_,
                      int64_t blocktime_,
                      int32_t depth_,
                      std::vector<OutputRecord> receivedOutputs_,
                      std::vector<OutputRecord> sentOutputs_)
    : txHash(std::move(txHash_))
    , timestamp(std::move(timestamp_))
    , amount(std::move(amount_))
    , fee(std::move(fee_))
    , status(std::move(status_))
    , height(std::move(height_))
    , blocktime(std::move(blocktime_))
    , depth(std::move(depth_))
    , receivedOutputs(std::move(receivedOutputs_))
    , sentOutputs(std::move(sentOutputs_))
    {}
};
