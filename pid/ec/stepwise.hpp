
/*
// Copyright (c) 2018 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#pragma once

#include <cstddef>
#include <vector>

namespace ec
{
constexpr size_t maxStepwisePoints = 20;

struct StepwiseInfo
{
    double ts; // sample time in seconds
    double reading[maxStepwisePoints];
    double output[maxStepwisePoints];
    double positiveHysteresis;
    double negativeHysteresis;
};

double stepwise(const ec::StepwiseInfo& info, double value);

} // namespace ec