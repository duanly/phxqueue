/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* phxrpc_store_service.cpp

 Generated by phxrpc_pb2service from store.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#include "phxrpc_store_service.h"

#include "phxrpc/file.h"

#include "store.pb.h"


StoreService::StoreService() {}

StoreService::~StoreService() {}

int StoreService::PHXEcho(const google::protobuf::StringValue &/* req */,
                          google::protobuf::StringValue */* resp */) {
    phxrpc::log(LOG_ERR, "ERROR: PHXEcho unimplemented");
    return -1;
}

int StoreService::Add(const phxqueue::comm::proto::AddRequest &/* req */,
                      phxqueue::comm::proto::AddResponse */* resp */) {
    phxrpc::log(LOG_ERR, "ERROR: Add unimplemented");
    return -1;
}

int StoreService::Get(const phxqueue::comm::proto::GetRequest &/* req */,
                      phxqueue::comm::proto::GetResponse */* resp */) {
    phxrpc::log(LOG_ERR, "ERROR: Get unimplemented");
    return -1;
}

