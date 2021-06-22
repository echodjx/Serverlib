//
// Created by echo-djx on 2021/6/21.
//
#pragma once
#include <memory>

#include <functional>
class Buffer;
class TcpConnection;
class Timestamp;

using TcpConnectionPtr = std::shared_ptr<TcpConnection>;
using ConnectionCallback = std::function<void (const TcpConnectionPtr&)>;
using CloseCallback = std ::function<void (const TcpConnectionPtr&)>;
using WriteCompleteCallback = std::function<void (const TcpConnectionPtr&)>;

using MessageCallback = std::function<void (const  TcpConnectionPtr&,
                                        Buffer*,
                                        Timestamp)>;
using HighWaterMarkCallback = std::function<void (const TcpConnectionPtr&, size_t)>;