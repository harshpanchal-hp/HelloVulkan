//
// Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#ifndef AMD_VULKAN_SAMPLE_QUAD_H_
#define AMD_VULKAN_SAMPLE_QUAD_H_

#include "VulkanSample.h"

namespace AMD
{
class VulkanQuad : public VulkanSample
{
private:
    void CreatePipelineStateObject();
    void CreateMeshBuffers(VkCommandBuffer uploadCommandList);
    void RenderImpl(VkCommandBuffer commandList) override;
    void InitializeImpl(VkCommandBuffer uploadCommandList) override;
    void ShutdownImpl() override;

    VkDeviceMemory deviceMemory_ = VK_NULL_HANDLE;
    VkBuffer vertexBuffer_ = VK_NULL_HANDLE;
    VkBuffer indexBuffer_ = VK_NULL_HANDLE;

    VkShaderModule vertexShader_ = VK_NULL_HANDLE;
    VkShaderModule fragmentShader_ = VK_NULL_HANDLE;

    VkPipeline pipeline_ = VK_NULL_HANDLE;
    VkPipelineLayout pipelineLayout_ = VK_NULL_HANDLE;
};
}

#endif
