//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <armnn/ArmNN.hpp>

namespace armnn_driver
{

bool IsDynamicOutput(const armnn::TensorInfo& outputInfo);

armnn::TensorShape InferPadOutputShape(const armnn::TensorShape& inputShape,
                                       const std::vector<std::pair<unsigned int, unsigned int>>& padList);

armnn::TensorShape InferPreluOutputShape(const armnn::TensorShape& inputShape, const armnn::TensorShape& alphaShape);

} // namespace armnn_driver

