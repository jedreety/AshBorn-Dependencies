/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/vulkan.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif








static void glad_vk_load_VK_VERSION_1_0(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_0) return;
    context->AllocateCommandBuffers = (PFN_vkAllocateCommandBuffers) load(userptr, "vkAllocateCommandBuffers");
    context->AllocateDescriptorSets = (PFN_vkAllocateDescriptorSets) load(userptr, "vkAllocateDescriptorSets");
    context->AllocateMemory = (PFN_vkAllocateMemory) load(userptr, "vkAllocateMemory");
    context->BeginCommandBuffer = (PFN_vkBeginCommandBuffer) load(userptr, "vkBeginCommandBuffer");
    context->BindBufferMemory = (PFN_vkBindBufferMemory) load(userptr, "vkBindBufferMemory");
    context->BindImageMemory = (PFN_vkBindImageMemory) load(userptr, "vkBindImageMemory");
    context->CmdBeginQuery = (PFN_vkCmdBeginQuery) load(userptr, "vkCmdBeginQuery");
    context->CmdBeginRenderPass = (PFN_vkCmdBeginRenderPass) load(userptr, "vkCmdBeginRenderPass");
    context->CmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets) load(userptr, "vkCmdBindDescriptorSets");
    context->CmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer) load(userptr, "vkCmdBindIndexBuffer");
    context->CmdBindPipeline = (PFN_vkCmdBindPipeline) load(userptr, "vkCmdBindPipeline");
    context->CmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers) load(userptr, "vkCmdBindVertexBuffers");
    context->CmdBlitImage = (PFN_vkCmdBlitImage) load(userptr, "vkCmdBlitImage");
    context->CmdClearAttachments = (PFN_vkCmdClearAttachments) load(userptr, "vkCmdClearAttachments");
    context->CmdClearColorImage = (PFN_vkCmdClearColorImage) load(userptr, "vkCmdClearColorImage");
    context->CmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage) load(userptr, "vkCmdClearDepthStencilImage");
    context->CmdCopyBuffer = (PFN_vkCmdCopyBuffer) load(userptr, "vkCmdCopyBuffer");
    context->CmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage) load(userptr, "vkCmdCopyBufferToImage");
    context->CmdCopyImage = (PFN_vkCmdCopyImage) load(userptr, "vkCmdCopyImage");
    context->CmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer) load(userptr, "vkCmdCopyImageToBuffer");
    context->CmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults) load(userptr, "vkCmdCopyQueryPoolResults");
    context->CmdDispatch = (PFN_vkCmdDispatch) load(userptr, "vkCmdDispatch");
    context->CmdDispatchIndirect = (PFN_vkCmdDispatchIndirect) load(userptr, "vkCmdDispatchIndirect");
    context->CmdDraw = (PFN_vkCmdDraw) load(userptr, "vkCmdDraw");
    context->CmdDrawIndexed = (PFN_vkCmdDrawIndexed) load(userptr, "vkCmdDrawIndexed");
    context->CmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect) load(userptr, "vkCmdDrawIndexedIndirect");
    context->CmdDrawIndirect = (PFN_vkCmdDrawIndirect) load(userptr, "vkCmdDrawIndirect");
    context->CmdEndQuery = (PFN_vkCmdEndQuery) load(userptr, "vkCmdEndQuery");
    context->CmdEndRenderPass = (PFN_vkCmdEndRenderPass) load(userptr, "vkCmdEndRenderPass");
    context->CmdExecuteCommands = (PFN_vkCmdExecuteCommands) load(userptr, "vkCmdExecuteCommands");
    context->CmdFillBuffer = (PFN_vkCmdFillBuffer) load(userptr, "vkCmdFillBuffer");
    context->CmdNextSubpass = (PFN_vkCmdNextSubpass) load(userptr, "vkCmdNextSubpass");
    context->CmdPipelineBarrier = (PFN_vkCmdPipelineBarrier) load(userptr, "vkCmdPipelineBarrier");
    context->CmdPushConstants = (PFN_vkCmdPushConstants) load(userptr, "vkCmdPushConstants");
    context->CmdResetEvent = (PFN_vkCmdResetEvent) load(userptr, "vkCmdResetEvent");
    context->CmdResetQueryPool = (PFN_vkCmdResetQueryPool) load(userptr, "vkCmdResetQueryPool");
    context->CmdResolveImage = (PFN_vkCmdResolveImage) load(userptr, "vkCmdResolveImage");
    context->CmdSetBlendConstants = (PFN_vkCmdSetBlendConstants) load(userptr, "vkCmdSetBlendConstants");
    context->CmdSetDepthBias = (PFN_vkCmdSetDepthBias) load(userptr, "vkCmdSetDepthBias");
    context->CmdSetDepthBounds = (PFN_vkCmdSetDepthBounds) load(userptr, "vkCmdSetDepthBounds");
    context->CmdSetEvent = (PFN_vkCmdSetEvent) load(userptr, "vkCmdSetEvent");
    context->CmdSetLineWidth = (PFN_vkCmdSetLineWidth) load(userptr, "vkCmdSetLineWidth");
    context->CmdSetScissor = (PFN_vkCmdSetScissor) load(userptr, "vkCmdSetScissor");
    context->CmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask) load(userptr, "vkCmdSetStencilCompareMask");
    context->CmdSetStencilReference = (PFN_vkCmdSetStencilReference) load(userptr, "vkCmdSetStencilReference");
    context->CmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask) load(userptr, "vkCmdSetStencilWriteMask");
    context->CmdSetViewport = (PFN_vkCmdSetViewport) load(userptr, "vkCmdSetViewport");
    context->CmdUpdateBuffer = (PFN_vkCmdUpdateBuffer) load(userptr, "vkCmdUpdateBuffer");
    context->CmdWaitEvents = (PFN_vkCmdWaitEvents) load(userptr, "vkCmdWaitEvents");
    context->CmdWriteTimestamp = (PFN_vkCmdWriteTimestamp) load(userptr, "vkCmdWriteTimestamp");
    context->CreateBuffer = (PFN_vkCreateBuffer) load(userptr, "vkCreateBuffer");
    context->CreateBufferView = (PFN_vkCreateBufferView) load(userptr, "vkCreateBufferView");
    context->CreateCommandPool = (PFN_vkCreateCommandPool) load(userptr, "vkCreateCommandPool");
    context->CreateComputePipelines = (PFN_vkCreateComputePipelines) load(userptr, "vkCreateComputePipelines");
    context->CreateDescriptorPool = (PFN_vkCreateDescriptorPool) load(userptr, "vkCreateDescriptorPool");
    context->CreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout) load(userptr, "vkCreateDescriptorSetLayout");
    context->CreateDevice = (PFN_vkCreateDevice) load(userptr, "vkCreateDevice");
    context->CreateEvent = (PFN_vkCreateEvent) load(userptr, "vkCreateEvent");
    context->CreateFence = (PFN_vkCreateFence) load(userptr, "vkCreateFence");
    context->CreateFramebuffer = (PFN_vkCreateFramebuffer) load(userptr, "vkCreateFramebuffer");
    context->CreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines) load(userptr, "vkCreateGraphicsPipelines");
    context->CreateImage = (PFN_vkCreateImage) load(userptr, "vkCreateImage");
    context->CreateImageView = (PFN_vkCreateImageView) load(userptr, "vkCreateImageView");
    context->CreateInstance = (PFN_vkCreateInstance) load(userptr, "vkCreateInstance");
    context->CreatePipelineCache = (PFN_vkCreatePipelineCache) load(userptr, "vkCreatePipelineCache");
    context->CreatePipelineLayout = (PFN_vkCreatePipelineLayout) load(userptr, "vkCreatePipelineLayout");
    context->CreateQueryPool = (PFN_vkCreateQueryPool) load(userptr, "vkCreateQueryPool");
    context->CreateRenderPass = (PFN_vkCreateRenderPass) load(userptr, "vkCreateRenderPass");
    context->CreateSampler = (PFN_vkCreateSampler) load(userptr, "vkCreateSampler");
    context->CreateSemaphore = (PFN_vkCreateSemaphore) load(userptr, "vkCreateSemaphore");
    context->CreateShaderModule = (PFN_vkCreateShaderModule) load(userptr, "vkCreateShaderModule");
    context->DestroyBuffer = (PFN_vkDestroyBuffer) load(userptr, "vkDestroyBuffer");
    context->DestroyBufferView = (PFN_vkDestroyBufferView) load(userptr, "vkDestroyBufferView");
    context->DestroyCommandPool = (PFN_vkDestroyCommandPool) load(userptr, "vkDestroyCommandPool");
    context->DestroyDescriptorPool = (PFN_vkDestroyDescriptorPool) load(userptr, "vkDestroyDescriptorPool");
    context->DestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout) load(userptr, "vkDestroyDescriptorSetLayout");
    context->DestroyDevice = (PFN_vkDestroyDevice) load(userptr, "vkDestroyDevice");
    context->DestroyEvent = (PFN_vkDestroyEvent) load(userptr, "vkDestroyEvent");
    context->DestroyFence = (PFN_vkDestroyFence) load(userptr, "vkDestroyFence");
    context->DestroyFramebuffer = (PFN_vkDestroyFramebuffer) load(userptr, "vkDestroyFramebuffer");
    context->DestroyImage = (PFN_vkDestroyImage) load(userptr, "vkDestroyImage");
    context->DestroyImageView = (PFN_vkDestroyImageView) load(userptr, "vkDestroyImageView");
    context->DestroyInstance = (PFN_vkDestroyInstance) load(userptr, "vkDestroyInstance");
    context->DestroyPipeline = (PFN_vkDestroyPipeline) load(userptr, "vkDestroyPipeline");
    context->DestroyPipelineCache = (PFN_vkDestroyPipelineCache) load(userptr, "vkDestroyPipelineCache");
    context->DestroyPipelineLayout = (PFN_vkDestroyPipelineLayout) load(userptr, "vkDestroyPipelineLayout");
    context->DestroyQueryPool = (PFN_vkDestroyQueryPool) load(userptr, "vkDestroyQueryPool");
    context->DestroyRenderPass = (PFN_vkDestroyRenderPass) load(userptr, "vkDestroyRenderPass");
    context->DestroySampler = (PFN_vkDestroySampler) load(userptr, "vkDestroySampler");
    context->DestroySemaphore = (PFN_vkDestroySemaphore) load(userptr, "vkDestroySemaphore");
    context->DestroyShaderModule = (PFN_vkDestroyShaderModule) load(userptr, "vkDestroyShaderModule");
    context->DeviceWaitIdle = (PFN_vkDeviceWaitIdle) load(userptr, "vkDeviceWaitIdle");
    context->EndCommandBuffer = (PFN_vkEndCommandBuffer) load(userptr, "vkEndCommandBuffer");
    context->EnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties) load(userptr, "vkEnumerateDeviceExtensionProperties");
    context->EnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties) load(userptr, "vkEnumerateDeviceLayerProperties");
    context->EnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties) load(userptr, "vkEnumerateInstanceExtensionProperties");
    context->EnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties) load(userptr, "vkEnumerateInstanceLayerProperties");
    context->EnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices) load(userptr, "vkEnumeratePhysicalDevices");
    context->FlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges) load(userptr, "vkFlushMappedMemoryRanges");
    context->FreeCommandBuffers = (PFN_vkFreeCommandBuffers) load(userptr, "vkFreeCommandBuffers");
    context->FreeDescriptorSets = (PFN_vkFreeDescriptorSets) load(userptr, "vkFreeDescriptorSets");
    context->FreeMemory = (PFN_vkFreeMemory) load(userptr, "vkFreeMemory");
    context->GetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements) load(userptr, "vkGetBufferMemoryRequirements");
    context->GetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment) load(userptr, "vkGetDeviceMemoryCommitment");
    context->GetDeviceProcAddr = (PFN_vkGetDeviceProcAddr) load(userptr, "vkGetDeviceProcAddr");
    context->GetDeviceQueue = (PFN_vkGetDeviceQueue) load(userptr, "vkGetDeviceQueue");
    context->GetEventStatus = (PFN_vkGetEventStatus) load(userptr, "vkGetEventStatus");
    context->GetFenceStatus = (PFN_vkGetFenceStatus) load(userptr, "vkGetFenceStatus");
    context->GetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements) load(userptr, "vkGetImageMemoryRequirements");
    context->GetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements) load(userptr, "vkGetImageSparseMemoryRequirements");
    context->GetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout) load(userptr, "vkGetImageSubresourceLayout");
    context->GetInstanceProcAddr = (PFN_vkGetInstanceProcAddr) load(userptr, "vkGetInstanceProcAddr");
    context->GetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures) load(userptr, "vkGetPhysicalDeviceFeatures");
    context->GetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties) load(userptr, "vkGetPhysicalDeviceFormatProperties");
    context->GetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties) load(userptr, "vkGetPhysicalDeviceImageFormatProperties");
    context->GetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties) load(userptr, "vkGetPhysicalDeviceMemoryProperties");
    context->GetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties) load(userptr, "vkGetPhysicalDeviceProperties");
    context->GetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties");
    context->GetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties");
    context->GetPipelineCacheData = (PFN_vkGetPipelineCacheData) load(userptr, "vkGetPipelineCacheData");
    context->GetQueryPoolResults = (PFN_vkGetQueryPoolResults) load(userptr, "vkGetQueryPoolResults");
    context->GetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity) load(userptr, "vkGetRenderAreaGranularity");
    context->InvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges) load(userptr, "vkInvalidateMappedMemoryRanges");
    context->MapMemory = (PFN_vkMapMemory) load(userptr, "vkMapMemory");
    context->MergePipelineCaches = (PFN_vkMergePipelineCaches) load(userptr, "vkMergePipelineCaches");
    context->QueueBindSparse = (PFN_vkQueueBindSparse) load(userptr, "vkQueueBindSparse");
    context->QueueSubmit = (PFN_vkQueueSubmit) load(userptr, "vkQueueSubmit");
    context->QueueWaitIdle = (PFN_vkQueueWaitIdle) load(userptr, "vkQueueWaitIdle");
    context->ResetCommandBuffer = (PFN_vkResetCommandBuffer) load(userptr, "vkResetCommandBuffer");
    context->ResetCommandPool = (PFN_vkResetCommandPool) load(userptr, "vkResetCommandPool");
    context->ResetDescriptorPool = (PFN_vkResetDescriptorPool) load(userptr, "vkResetDescriptorPool");
    context->ResetEvent = (PFN_vkResetEvent) load(userptr, "vkResetEvent");
    context->ResetFences = (PFN_vkResetFences) load(userptr, "vkResetFences");
    context->SetEvent = (PFN_vkSetEvent) load(userptr, "vkSetEvent");
    context->UnmapMemory = (PFN_vkUnmapMemory) load(userptr, "vkUnmapMemory");
    context->UpdateDescriptorSets = (PFN_vkUpdateDescriptorSets) load(userptr, "vkUpdateDescriptorSets");
    context->WaitForFences = (PFN_vkWaitForFences) load(userptr, "vkWaitForFences");
}
static void glad_vk_load_VK_VERSION_1_1(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_1) return;
    context->BindBufferMemory2 = (PFN_vkBindBufferMemory2) load(userptr, "vkBindBufferMemory2");
    context->BindImageMemory2 = (PFN_vkBindImageMemory2) load(userptr, "vkBindImageMemory2");
    context->CmdDispatchBase = (PFN_vkCmdDispatchBase) load(userptr, "vkCmdDispatchBase");
    context->CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) load(userptr, "vkCmdSetDeviceMask");
    context->CreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) load(userptr, "vkCreateDescriptorUpdateTemplate");
    context->CreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) load(userptr, "vkCreateSamplerYcbcrConversion");
    context->DestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) load(userptr, "vkDestroyDescriptorUpdateTemplate");
    context->DestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) load(userptr, "vkDestroySamplerYcbcrConversion");
    context->EnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
    context->EnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) load(userptr, "vkEnumeratePhysicalDeviceGroups");
    context->GetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) load(userptr, "vkGetBufferMemoryRequirements2");
    context->GetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) load(userptr, "vkGetDescriptorSetLayoutSupport");
    context->GetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) load(userptr, "vkGetDeviceGroupPeerMemoryFeatures");
    context->GetDeviceQueue2 = (PFN_vkGetDeviceQueue2) load(userptr, "vkGetDeviceQueue2");
    context->GetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) load(userptr, "vkGetImageMemoryRequirements2");
    context->GetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) load(userptr, "vkGetImageSparseMemoryRequirements2");
    context->GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) load(userptr, "vkGetPhysicalDeviceExternalBufferProperties");
    context->GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) load(userptr, "vkGetPhysicalDeviceExternalFenceProperties");
    context->GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) load(userptr, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    context->GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) load(userptr, "vkGetPhysicalDeviceFeatures2");
    context->GetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) load(userptr, "vkGetPhysicalDeviceFormatProperties2");
    context->GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2");
    context->GetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) load(userptr, "vkGetPhysicalDeviceMemoryProperties2");
    context->GetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) load(userptr, "vkGetPhysicalDeviceProperties2");
    context->GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2");
    context->GetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    context->TrimCommandPool = (PFN_vkTrimCommandPool) load(userptr, "vkTrimCommandPool");
    context->UpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) load(userptr, "vkUpdateDescriptorSetWithTemplate");
}
static void glad_vk_load_VK_VERSION_1_2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_2) return;
    context->CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2) load(userptr, "vkCmdBeginRenderPass2");
    context->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount) load(userptr, "vkCmdDrawIndexedIndirectCount");
    context->CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount) load(userptr, "vkCmdDrawIndirectCount");
    context->CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2) load(userptr, "vkCmdEndRenderPass2");
    context->CmdNextSubpass2 = (PFN_vkCmdNextSubpass2) load(userptr, "vkCmdNextSubpass2");
    context->CreateRenderPass2 = (PFN_vkCreateRenderPass2) load(userptr, "vkCreateRenderPass2");
    context->GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress) load(userptr, "vkGetBufferDeviceAddress");
    context->GetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress) load(userptr, "vkGetBufferOpaqueCaptureAddress");
    context->GetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress) load(userptr, "vkGetDeviceMemoryOpaqueCaptureAddress");
    context->GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue) load(userptr, "vkGetSemaphoreCounterValue");
    context->ResetQueryPool = (PFN_vkResetQueryPool) load(userptr, "vkResetQueryPool");
    context->SignalSemaphore = (PFN_vkSignalSemaphore) load(userptr, "vkSignalSemaphore");
    context->WaitSemaphores = (PFN_vkWaitSemaphores) load(userptr, "vkWaitSemaphores");
}
static void glad_vk_load_VK_VERSION_1_3(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_3) return;
    context->CmdBeginRendering = (PFN_vkCmdBeginRendering) load(userptr, "vkCmdBeginRendering");
    context->CmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2) load(userptr, "vkCmdBindVertexBuffers2");
    context->CmdBlitImage2 = (PFN_vkCmdBlitImage2) load(userptr, "vkCmdBlitImage2");
    context->CmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2) load(userptr, "vkCmdCopyBuffer2");
    context->CmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2) load(userptr, "vkCmdCopyBufferToImage2");
    context->CmdCopyImage2 = (PFN_vkCmdCopyImage2) load(userptr, "vkCmdCopyImage2");
    context->CmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2) load(userptr, "vkCmdCopyImageToBuffer2");
    context->CmdEndRendering = (PFN_vkCmdEndRendering) load(userptr, "vkCmdEndRendering");
    context->CmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2) load(userptr, "vkCmdPipelineBarrier2");
    context->CmdResetEvent2 = (PFN_vkCmdResetEvent2) load(userptr, "vkCmdResetEvent2");
    context->CmdResolveImage2 = (PFN_vkCmdResolveImage2) load(userptr, "vkCmdResolveImage2");
    context->CmdSetCullMode = (PFN_vkCmdSetCullMode) load(userptr, "vkCmdSetCullMode");
    context->CmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable) load(userptr, "vkCmdSetDepthBiasEnable");
    context->CmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable) load(userptr, "vkCmdSetDepthBoundsTestEnable");
    context->CmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp) load(userptr, "vkCmdSetDepthCompareOp");
    context->CmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable) load(userptr, "vkCmdSetDepthTestEnable");
    context->CmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable) load(userptr, "vkCmdSetDepthWriteEnable");
    context->CmdSetEvent2 = (PFN_vkCmdSetEvent2) load(userptr, "vkCmdSetEvent2");
    context->CmdSetFrontFace = (PFN_vkCmdSetFrontFace) load(userptr, "vkCmdSetFrontFace");
    context->CmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable) load(userptr, "vkCmdSetPrimitiveRestartEnable");
    context->CmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology) load(userptr, "vkCmdSetPrimitiveTopology");
    context->CmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable) load(userptr, "vkCmdSetRasterizerDiscardEnable");
    context->CmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount) load(userptr, "vkCmdSetScissorWithCount");
    context->CmdSetStencilOp = (PFN_vkCmdSetStencilOp) load(userptr, "vkCmdSetStencilOp");
    context->CmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable) load(userptr, "vkCmdSetStencilTestEnable");
    context->CmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount) load(userptr, "vkCmdSetViewportWithCount");
    context->CmdWaitEvents2 = (PFN_vkCmdWaitEvents2) load(userptr, "vkCmdWaitEvents2");
    context->CmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2) load(userptr, "vkCmdWriteTimestamp2");
    context->CreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot) load(userptr, "vkCreatePrivateDataSlot");
    context->DestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot) load(userptr, "vkDestroyPrivateDataSlot");
    context->GetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements) load(userptr, "vkGetDeviceBufferMemoryRequirements");
    context->GetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements) load(userptr, "vkGetDeviceImageMemoryRequirements");
    context->GetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements) load(userptr, "vkGetDeviceImageSparseMemoryRequirements");
    context->GetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties) load(userptr, "vkGetPhysicalDeviceToolProperties");
    context->GetPrivateData = (PFN_vkGetPrivateData) load(userptr, "vkGetPrivateData");
    context->QueueSubmit2 = (PFN_vkQueueSubmit2) load(userptr, "vkQueueSubmit2");
    context->SetPrivateData = (PFN_vkSetPrivateData) load(userptr, "vkSetPrivateData");
}
static void glad_vk_load_VK_VERSION_1_4(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->VERSION_1_4) return;
    context->CmdBindDescriptorSets2 = (PFN_vkCmdBindDescriptorSets2) load(userptr, "vkCmdBindDescriptorSets2");
    context->CmdBindIndexBuffer2 = (PFN_vkCmdBindIndexBuffer2) load(userptr, "vkCmdBindIndexBuffer2");
    context->CmdPushConstants2 = (PFN_vkCmdPushConstants2) load(userptr, "vkCmdPushConstants2");
    context->CmdPushDescriptorSet = (PFN_vkCmdPushDescriptorSet) load(userptr, "vkCmdPushDescriptorSet");
    context->CmdPushDescriptorSet2 = (PFN_vkCmdPushDescriptorSet2) load(userptr, "vkCmdPushDescriptorSet2");
    context->CmdPushDescriptorSetWithTemplate = (PFN_vkCmdPushDescriptorSetWithTemplate) load(userptr, "vkCmdPushDescriptorSetWithTemplate");
    context->CmdPushDescriptorSetWithTemplate2 = (PFN_vkCmdPushDescriptorSetWithTemplate2) load(userptr, "vkCmdPushDescriptorSetWithTemplate2");
    context->CmdSetLineStipple = (PFN_vkCmdSetLineStipple) load(userptr, "vkCmdSetLineStipple");
    context->CmdSetRenderingAttachmentLocations = (PFN_vkCmdSetRenderingAttachmentLocations) load(userptr, "vkCmdSetRenderingAttachmentLocations");
    context->CmdSetRenderingInputAttachmentIndices = (PFN_vkCmdSetRenderingInputAttachmentIndices) load(userptr, "vkCmdSetRenderingInputAttachmentIndices");
    context->CopyImageToImage = (PFN_vkCopyImageToImage) load(userptr, "vkCopyImageToImage");
    context->CopyImageToMemory = (PFN_vkCopyImageToMemory) load(userptr, "vkCopyImageToMemory");
    context->CopyMemoryToImage = (PFN_vkCopyMemoryToImage) load(userptr, "vkCopyMemoryToImage");
    context->GetDeviceImageSubresourceLayout = (PFN_vkGetDeviceImageSubresourceLayout) load(userptr, "vkGetDeviceImageSubresourceLayout");
    context->GetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2) load(userptr, "vkGetImageSubresourceLayout2");
    context->GetRenderingAreaGranularity = (PFN_vkGetRenderingAreaGranularity) load(userptr, "vkGetRenderingAreaGranularity");
    context->MapMemory2 = (PFN_vkMapMemory2) load(userptr, "vkMapMemory2");
    context->TransitionImageLayout = (PFN_vkTransitionImageLayout) load(userptr, "vkTransitionImageLayout");
    context->UnmapMemory2 = (PFN_vkUnmapMemory2) load(userptr, "vkUnmapMemory2");
}
static void glad_vk_load_VK_AMD_buffer_marker(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->AMD_buffer_marker) return;
    context->CmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD) load(userptr, "vkCmdWriteBufferMarker2AMD");
    context->CmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD) load(userptr, "vkCmdWriteBufferMarkerAMD");
}
static void glad_vk_load_VK_AMD_draw_indirect_count(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->AMD_draw_indirect_count) return;
    context->CmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD) load(userptr, "vkCmdDrawIndexedIndirectCountAMD");
    context->CmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD) load(userptr, "vkCmdDrawIndirectCountAMD");
}
static void glad_vk_load_VK_AMD_shader_info(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->AMD_shader_info) return;
    context->GetShaderInfoAMD = (PFN_vkGetShaderInfoAMD) load(userptr, "vkGetShaderInfoAMD");
}
static void glad_vk_load_VK_EXT_buffer_device_address(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_buffer_device_address) return;
    context->GetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT) load(userptr, "vkGetBufferDeviceAddressEXT");
}
static void glad_vk_load_VK_EXT_calibrated_timestamps(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_calibrated_timestamps) return;
    context->GetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT) load(userptr, "vkGetCalibratedTimestampsEXT");
    context->GetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) load(userptr, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
}
static void glad_vk_load_VK_EXT_conditional_rendering(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_conditional_rendering) return;
    context->CmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT) load(userptr, "vkCmdBeginConditionalRenderingEXT");
    context->CmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT) load(userptr, "vkCmdEndConditionalRenderingEXT");
}
static void glad_vk_load_VK_EXT_debug_utils(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_debug_utils) return;
    context->CmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT) load(userptr, "vkCmdBeginDebugUtilsLabelEXT");
    context->CmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT) load(userptr, "vkCmdEndDebugUtilsLabelEXT");
    context->CmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT) load(userptr, "vkCmdInsertDebugUtilsLabelEXT");
    context->CreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT) load(userptr, "vkCreateDebugUtilsMessengerEXT");
    context->DestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT) load(userptr, "vkDestroyDebugUtilsMessengerEXT");
    context->QueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT) load(userptr, "vkQueueBeginDebugUtilsLabelEXT");
    context->QueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT) load(userptr, "vkQueueEndDebugUtilsLabelEXT");
    context->QueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT) load(userptr, "vkQueueInsertDebugUtilsLabelEXT");
    context->SetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT) load(userptr, "vkSetDebugUtilsObjectNameEXT");
    context->SetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT) load(userptr, "vkSetDebugUtilsObjectTagEXT");
    context->SubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT) load(userptr, "vkSubmitDebugUtilsMessageEXT");
}
static void glad_vk_load_VK_EXT_depth_clamp_control(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_depth_clamp_control) return;
    context->CmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT) load(userptr, "vkCmdSetDepthClampRangeEXT");
}
static void glad_vk_load_VK_EXT_descriptor_buffer(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_descriptor_buffer) return;
    context->CmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT) load(userptr, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
    context->CmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT) load(userptr, "vkCmdBindDescriptorBuffersEXT");
    context->CmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT) load(userptr, "vkCmdSetDescriptorBufferOffsetsEXT");
    context->GetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
    context->GetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
    context->GetDescriptorEXT = (PFN_vkGetDescriptorEXT) load(userptr, "vkGetDescriptorEXT");
    context->GetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT) load(userptr, "vkGetDescriptorSetLayoutBindingOffsetEXT");
    context->GetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT) load(userptr, "vkGetDescriptorSetLayoutSizeEXT");
    context->GetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetImageOpaqueCaptureDescriptorDataEXT");
    context->GetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
    context->GetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
}
static void glad_vk_load_VK_EXT_extended_dynamic_state(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_extended_dynamic_state) return;
    context->CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT) load(userptr, "vkCmdBindVertexBuffers2EXT");
    context->CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT) load(userptr, "vkCmdSetCullModeEXT");
    context->CmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT) load(userptr, "vkCmdSetDepthBoundsTestEnableEXT");
    context->CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT) load(userptr, "vkCmdSetDepthCompareOpEXT");
    context->CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT) load(userptr, "vkCmdSetDepthTestEnableEXT");
    context->CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT) load(userptr, "vkCmdSetDepthWriteEnableEXT");
    context->CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT) load(userptr, "vkCmdSetFrontFaceEXT");
    context->CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT) load(userptr, "vkCmdSetPrimitiveTopologyEXT");
    context->CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT) load(userptr, "vkCmdSetScissorWithCountEXT");
    context->CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT) load(userptr, "vkCmdSetStencilOpEXT");
    context->CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT) load(userptr, "vkCmdSetStencilTestEnableEXT");
    context->CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT) load(userptr, "vkCmdSetViewportWithCountEXT");
}
static void glad_vk_load_VK_EXT_extended_dynamic_state2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_extended_dynamic_state2) return;
    context->CmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT) load(userptr, "vkCmdSetDepthBiasEnableEXT");
    context->CmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT) load(userptr, "vkCmdSetLogicOpEXT");
    context->CmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT) load(userptr, "vkCmdSetPatchControlPointsEXT");
    context->CmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT) load(userptr, "vkCmdSetPrimitiveRestartEnableEXT");
    context->CmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT) load(userptr, "vkCmdSetRasterizerDiscardEnableEXT");
}
static void glad_vk_load_VK_EXT_extended_dynamic_state3(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_extended_dynamic_state3) return;
    context->CmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT) load(userptr, "vkCmdSetAlphaToCoverageEnableEXT");
    context->CmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT) load(userptr, "vkCmdSetAlphaToOneEnableEXT");
    context->CmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT) load(userptr, "vkCmdSetColorBlendAdvancedEXT");
    context->CmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT) load(userptr, "vkCmdSetColorBlendEnableEXT");
    context->CmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT) load(userptr, "vkCmdSetColorBlendEquationEXT");
    context->CmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT) load(userptr, "vkCmdSetColorWriteMaskEXT");
    context->CmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT) load(userptr, "vkCmdSetConservativeRasterizationModeEXT");
    context->CmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV) load(userptr, "vkCmdSetCoverageModulationModeNV");
    context->CmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV) load(userptr, "vkCmdSetCoverageModulationTableEnableNV");
    context->CmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV) load(userptr, "vkCmdSetCoverageModulationTableNV");
    context->CmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV) load(userptr, "vkCmdSetCoverageReductionModeNV");
    context->CmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV) load(userptr, "vkCmdSetCoverageToColorEnableNV");
    context->CmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV) load(userptr, "vkCmdSetCoverageToColorLocationNV");
    context->CmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT) load(userptr, "vkCmdSetDepthClampEnableEXT");
    context->CmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT) load(userptr, "vkCmdSetDepthClipEnableEXT");
    context->CmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT) load(userptr, "vkCmdSetDepthClipNegativeOneToOneEXT");
    context->CmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT) load(userptr, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
    context->CmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT) load(userptr, "vkCmdSetLineRasterizationModeEXT");
    context->CmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT) load(userptr, "vkCmdSetLineStippleEnableEXT");
    context->CmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT) load(userptr, "vkCmdSetLogicOpEnableEXT");
    context->CmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT) load(userptr, "vkCmdSetPolygonModeEXT");
    context->CmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT) load(userptr, "vkCmdSetProvokingVertexModeEXT");
    context->CmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT) load(userptr, "vkCmdSetRasterizationSamplesEXT");
    context->CmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT) load(userptr, "vkCmdSetRasterizationStreamEXT");
    context->CmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV) load(userptr, "vkCmdSetRepresentativeFragmentTestEnableNV");
    context->CmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT) load(userptr, "vkCmdSetSampleLocationsEnableEXT");
    context->CmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT) load(userptr, "vkCmdSetSampleMaskEXT");
    context->CmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV) load(userptr, "vkCmdSetShadingRateImageEnableNV");
    context->CmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT) load(userptr, "vkCmdSetTessellationDomainOriginEXT");
    context->CmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV) load(userptr, "vkCmdSetViewportSwizzleNV");
    context->CmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV) load(userptr, "vkCmdSetViewportWScalingEnableNV");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_EXT_full_screen_exclusive(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_full_screen_exclusive) return;
    context->AcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT) load(userptr, "vkAcquireFullScreenExclusiveModeEXT");
    context->GetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT) load(userptr, "vkGetDeviceGroupSurfacePresentModes2EXT");
    context->GetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT) load(userptr, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
    context->ReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT) load(userptr, "vkReleaseFullScreenExclusiveModeEXT");
}

#endif
static void glad_vk_load_VK_EXT_hdr_metadata(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_hdr_metadata) return;
    context->SetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT) load(userptr, "vkSetHdrMetadataEXT");
}
static void glad_vk_load_VK_EXT_host_image_copy(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_host_image_copy) return;
    context->CopyImageToImageEXT = (PFN_vkCopyImageToImageEXT) load(userptr, "vkCopyImageToImageEXT");
    context->CopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT) load(userptr, "vkCopyImageToMemoryEXT");
    context->CopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT) load(userptr, "vkCopyMemoryToImageEXT");
    context->GetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT) load(userptr, "vkGetImageSubresourceLayout2EXT");
    context->TransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT) load(userptr, "vkTransitionImageLayoutEXT");
}
static void glad_vk_load_VK_EXT_host_query_reset(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_host_query_reset) return;
    context->ResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT) load(userptr, "vkResetQueryPoolEXT");
}
static void glad_vk_load_VK_EXT_image_compression_control(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_image_compression_control) return;
    context->GetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT) load(userptr, "vkGetImageSubresourceLayout2EXT");
}
static void glad_vk_load_VK_EXT_line_rasterization(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_line_rasterization) return;
    context->CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT) load(userptr, "vkCmdSetLineStippleEXT");
}
static void glad_vk_load_VK_EXT_mesh_shader(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_mesh_shader) return;
    context->CmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT) load(userptr, "vkCmdDrawMeshTasksEXT");
    context->CmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT) load(userptr, "vkCmdDrawMeshTasksIndirectCountEXT");
    context->CmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT) load(userptr, "vkCmdDrawMeshTasksIndirectEXT");
}
static void glad_vk_load_VK_EXT_pageable_device_local_memory(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_pageable_device_local_memory) return;
    context->SetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT) load(userptr, "vkSetDeviceMemoryPriorityEXT");
}
static void glad_vk_load_VK_EXT_private_data(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_private_data) return;
    context->CreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT) load(userptr, "vkCreatePrivateDataSlotEXT");
    context->DestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT) load(userptr, "vkDestroyPrivateDataSlotEXT");
    context->GetPrivateDataEXT = (PFN_vkGetPrivateDataEXT) load(userptr, "vkGetPrivateDataEXT");
    context->SetPrivateDataEXT = (PFN_vkSetPrivateDataEXT) load(userptr, "vkSetPrivateDataEXT");
}
static void glad_vk_load_VK_EXT_sample_locations(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_sample_locations) return;
    context->CmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT) load(userptr, "vkCmdSetSampleLocationsEXT");
    context->GetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT) load(userptr, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
}
static void glad_vk_load_VK_EXT_shader_module_identifier(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_shader_module_identifier) return;
    context->GetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT) load(userptr, "vkGetShaderModuleCreateInfoIdentifierEXT");
    context->GetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT) load(userptr, "vkGetShaderModuleIdentifierEXT");
}
static void glad_vk_load_VK_EXT_shader_object(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_shader_object) return;
    context->CmdBindShadersEXT = (PFN_vkCmdBindShadersEXT) load(userptr, "vkCmdBindShadersEXT");
    context->CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT) load(userptr, "vkCmdBindVertexBuffers2EXT");
    context->CmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT) load(userptr, "vkCmdSetAlphaToCoverageEnableEXT");
    context->CmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT) load(userptr, "vkCmdSetAlphaToOneEnableEXT");
    context->CmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT) load(userptr, "vkCmdSetColorBlendAdvancedEXT");
    context->CmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT) load(userptr, "vkCmdSetColorBlendEnableEXT");
    context->CmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT) load(userptr, "vkCmdSetColorBlendEquationEXT");
    context->CmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT) load(userptr, "vkCmdSetColorWriteMaskEXT");
    context->CmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT) load(userptr, "vkCmdSetConservativeRasterizationModeEXT");
    context->CmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV) load(userptr, "vkCmdSetCoverageModulationModeNV");
    context->CmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV) load(userptr, "vkCmdSetCoverageModulationTableEnableNV");
    context->CmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV) load(userptr, "vkCmdSetCoverageModulationTableNV");
    context->CmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV) load(userptr, "vkCmdSetCoverageReductionModeNV");
    context->CmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV) load(userptr, "vkCmdSetCoverageToColorEnableNV");
    context->CmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV) load(userptr, "vkCmdSetCoverageToColorLocationNV");
    context->CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT) load(userptr, "vkCmdSetCullModeEXT");
    context->CmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT) load(userptr, "vkCmdSetDepthBiasEnableEXT");
    context->CmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT) load(userptr, "vkCmdSetDepthBoundsTestEnableEXT");
    context->CmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT) load(userptr, "vkCmdSetDepthClampEnableEXT");
    context->CmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT) load(userptr, "vkCmdSetDepthClampRangeEXT");
    context->CmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT) load(userptr, "vkCmdSetDepthClipEnableEXT");
    context->CmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT) load(userptr, "vkCmdSetDepthClipNegativeOneToOneEXT");
    context->CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT) load(userptr, "vkCmdSetDepthCompareOpEXT");
    context->CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT) load(userptr, "vkCmdSetDepthTestEnableEXT");
    context->CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT) load(userptr, "vkCmdSetDepthWriteEnableEXT");
    context->CmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT) load(userptr, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
    context->CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT) load(userptr, "vkCmdSetFrontFaceEXT");
    context->CmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT) load(userptr, "vkCmdSetLineRasterizationModeEXT");
    context->CmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT) load(userptr, "vkCmdSetLineStippleEnableEXT");
    context->CmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT) load(userptr, "vkCmdSetLogicOpEXT");
    context->CmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT) load(userptr, "vkCmdSetLogicOpEnableEXT");
    context->CmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT) load(userptr, "vkCmdSetPatchControlPointsEXT");
    context->CmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT) load(userptr, "vkCmdSetPolygonModeEXT");
    context->CmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT) load(userptr, "vkCmdSetPrimitiveRestartEnableEXT");
    context->CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT) load(userptr, "vkCmdSetPrimitiveTopologyEXT");
    context->CmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT) load(userptr, "vkCmdSetProvokingVertexModeEXT");
    context->CmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT) load(userptr, "vkCmdSetRasterizationSamplesEXT");
    context->CmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT) load(userptr, "vkCmdSetRasterizationStreamEXT");
    context->CmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT) load(userptr, "vkCmdSetRasterizerDiscardEnableEXT");
    context->CmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV) load(userptr, "vkCmdSetRepresentativeFragmentTestEnableNV");
    context->CmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT) load(userptr, "vkCmdSetSampleLocationsEnableEXT");
    context->CmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT) load(userptr, "vkCmdSetSampleMaskEXT");
    context->CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT) load(userptr, "vkCmdSetScissorWithCountEXT");
    context->CmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV) load(userptr, "vkCmdSetShadingRateImageEnableNV");
    context->CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT) load(userptr, "vkCmdSetStencilOpEXT");
    context->CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT) load(userptr, "vkCmdSetStencilTestEnableEXT");
    context->CmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT) load(userptr, "vkCmdSetTessellationDomainOriginEXT");
    context->CmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT) load(userptr, "vkCmdSetVertexInputEXT");
    context->CmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV) load(userptr, "vkCmdSetViewportSwizzleNV");
    context->CmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV) load(userptr, "vkCmdSetViewportWScalingEnableNV");
    context->CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT) load(userptr, "vkCmdSetViewportWithCountEXT");
    context->CreateShadersEXT = (PFN_vkCreateShadersEXT) load(userptr, "vkCreateShadersEXT");
    context->DestroyShaderEXT = (PFN_vkDestroyShaderEXT) load(userptr, "vkDestroyShaderEXT");
    context->GetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT) load(userptr, "vkGetShaderBinaryDataEXT");
}
static void glad_vk_load_VK_EXT_tooling_info(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_tooling_info) return;
    context->GetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT) load(userptr, "vkGetPhysicalDeviceToolPropertiesEXT");
}
static void glad_vk_load_VK_EXT_transform_feedback(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_transform_feedback) return;
    context->CmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT) load(userptr, "vkCmdBeginQueryIndexedEXT");
    context->CmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT) load(userptr, "vkCmdBeginTransformFeedbackEXT");
    context->CmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT) load(userptr, "vkCmdBindTransformFeedbackBuffersEXT");
    context->CmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT) load(userptr, "vkCmdDrawIndirectByteCountEXT");
    context->CmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT) load(userptr, "vkCmdEndQueryIndexedEXT");
    context->CmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT) load(userptr, "vkCmdEndTransformFeedbackEXT");
}
static void glad_vk_load_VK_EXT_vertex_input_dynamic_state(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->EXT_vertex_input_dynamic_state) return;
    context->CmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT) load(userptr, "vkCmdSetVertexInputEXT");
}
static void glad_vk_load_VK_INTEL_performance_query(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->INTEL_performance_query) return;
    context->AcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL) load(userptr, "vkAcquirePerformanceConfigurationINTEL");
    context->CmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL) load(userptr, "vkCmdSetPerformanceMarkerINTEL");
    context->CmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL) load(userptr, "vkCmdSetPerformanceOverrideINTEL");
    context->CmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL) load(userptr, "vkCmdSetPerformanceStreamMarkerINTEL");
    context->GetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL) load(userptr, "vkGetPerformanceParameterINTEL");
    context->InitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL) load(userptr, "vkInitializePerformanceApiINTEL");
    context->QueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL) load(userptr, "vkQueueSetPerformanceConfigurationINTEL");
    context->ReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL) load(userptr, "vkReleasePerformanceConfigurationINTEL");
    context->UninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL) load(userptr, "vkUninitializePerformanceApiINTEL");
}
static void glad_vk_load_VK_KHR_acceleration_structure(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_acceleration_structure) return;
    context->BuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR) load(userptr, "vkBuildAccelerationStructuresKHR");
    context->CmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR) load(userptr, "vkCmdBuildAccelerationStructuresIndirectKHR");
    context->CmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR) load(userptr, "vkCmdBuildAccelerationStructuresKHR");
    context->CmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR) load(userptr, "vkCmdCopyAccelerationStructureKHR");
    context->CmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR) load(userptr, "vkCmdCopyAccelerationStructureToMemoryKHR");
    context->CmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR) load(userptr, "vkCmdCopyMemoryToAccelerationStructureKHR");
    context->CmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR) load(userptr, "vkCmdWriteAccelerationStructuresPropertiesKHR");
    context->CopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR) load(userptr, "vkCopyAccelerationStructureKHR");
    context->CopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR) load(userptr, "vkCopyAccelerationStructureToMemoryKHR");
    context->CopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR) load(userptr, "vkCopyMemoryToAccelerationStructureKHR");
    context->CreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR) load(userptr, "vkCreateAccelerationStructureKHR");
    context->DestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR) load(userptr, "vkDestroyAccelerationStructureKHR");
    context->GetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR) load(userptr, "vkGetAccelerationStructureBuildSizesKHR");
    context->GetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR) load(userptr, "vkGetAccelerationStructureDeviceAddressKHR");
    context->GetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR) load(userptr, "vkGetDeviceAccelerationStructureCompatibilityKHR");
    context->WriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR) load(userptr, "vkWriteAccelerationStructuresPropertiesKHR");
}
static void glad_vk_load_VK_KHR_bind_memory2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_bind_memory2) return;
    context->BindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR) load(userptr, "vkBindBufferMemory2KHR");
    context->BindImageMemory2KHR = (PFN_vkBindImageMemory2KHR) load(userptr, "vkBindImageMemory2KHR");
}
static void glad_vk_load_VK_KHR_buffer_device_address(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_buffer_device_address) return;
    context->GetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR) load(userptr, "vkGetBufferDeviceAddressKHR");
    context->GetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR) load(userptr, "vkGetBufferOpaqueCaptureAddressKHR");
    context->GetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR) load(userptr, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
}
static void glad_vk_load_VK_KHR_copy_commands2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_copy_commands2) return;
    context->CmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR) load(userptr, "vkCmdBlitImage2KHR");
    context->CmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR) load(userptr, "vkCmdCopyBuffer2KHR");
    context->CmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR) load(userptr, "vkCmdCopyBufferToImage2KHR");
    context->CmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR) load(userptr, "vkCmdCopyImage2KHR");
    context->CmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR) load(userptr, "vkCmdCopyImageToBuffer2KHR");
    context->CmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR) load(userptr, "vkCmdResolveImage2KHR");
}
static void glad_vk_load_VK_KHR_create_renderpass2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_create_renderpass2) return;
    context->CmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR) load(userptr, "vkCmdBeginRenderPass2KHR");
    context->CmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR) load(userptr, "vkCmdEndRenderPass2KHR");
    context->CmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR) load(userptr, "vkCmdNextSubpass2KHR");
    context->CreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR) load(userptr, "vkCreateRenderPass2KHR");
}
static void glad_vk_load_VK_KHR_descriptor_update_template(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_descriptor_update_template) return;
    context->CmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load(userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
    context->CreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR) load(userptr, "vkCreateDescriptorUpdateTemplateKHR");
    context->DestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR) load(userptr, "vkDestroyDescriptorUpdateTemplateKHR");
    context->UpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR) load(userptr, "vkUpdateDescriptorSetWithTemplateKHR");
}
static void glad_vk_load_VK_KHR_device_group(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_device_group) return;
    context->AcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load(userptr, "vkAcquireNextImage2KHR");
    context->CmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR) load(userptr, "vkCmdDispatchBaseKHR");
    context->CmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR) load(userptr, "vkCmdSetDeviceMaskKHR");
    context->GetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR) load(userptr, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
    context->GetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load(userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
    context->GetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load(userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
    context->GetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load(userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
}
static void glad_vk_load_VK_KHR_device_group_creation(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_device_group_creation) return;
    context->EnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR) load(userptr, "vkEnumeratePhysicalDeviceGroupsKHR");
}
static void glad_vk_load_VK_KHR_draw_indirect_count(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_draw_indirect_count) return;
    context->CmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR) load(userptr, "vkCmdDrawIndexedIndirectCountKHR");
    context->CmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR) load(userptr, "vkCmdDrawIndirectCountKHR");
}
static void glad_vk_load_VK_KHR_dynamic_rendering(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_dynamic_rendering) return;
    context->CmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR) load(userptr, "vkCmdBeginRenderingKHR");
    context->CmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR) load(userptr, "vkCmdEndRenderingKHR");
}
static void glad_vk_load_VK_KHR_dynamic_rendering_local_read(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_dynamic_rendering_local_read) return;
    context->CmdSetRenderingAttachmentLocationsKHR = (PFN_vkCmdSetRenderingAttachmentLocationsKHR) load(userptr, "vkCmdSetRenderingAttachmentLocationsKHR");
    context->CmdSetRenderingInputAttachmentIndicesKHR = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR) load(userptr, "vkCmdSetRenderingInputAttachmentIndicesKHR");
}
static void glad_vk_load_VK_KHR_external_fence_capabilities(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_external_fence_capabilities) return;
    context->GetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_memory_capabilities(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_external_memory_capabilities) return;
    context->GetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_semaphore_capabilities(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_external_semaphore_capabilities) return;
    context->GetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
}
static void glad_vk_load_VK_KHR_get_memory_requirements2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_get_memory_requirements2) return;
    context->GetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR) load(userptr, "vkGetBufferMemoryRequirements2KHR");
    context->GetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR) load(userptr, "vkGetImageMemoryRequirements2KHR");
    context->GetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR) load(userptr, "vkGetImageSparseMemoryRequirements2KHR");
}
static void glad_vk_load_VK_KHR_get_physical_device_properties2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_get_physical_device_properties2) return;
    context->GetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR) load(userptr, "vkGetPhysicalDeviceFeatures2KHR");
    context->GetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceFormatProperties2KHR");
    context->GetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2KHR");
    context->GetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR) load(userptr, "vkGetPhysicalDeviceMemoryProperties2KHR");
    context->GetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR) load(userptr, "vkGetPhysicalDeviceProperties2KHR");
    context->GetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
    context->GetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
}
static void glad_vk_load_VK_KHR_line_rasterization(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_line_rasterization) return;
    context->CmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR) load(userptr, "vkCmdSetLineStippleKHR");
}
static void glad_vk_load_VK_KHR_maintenance1(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_maintenance1) return;
    context->TrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR) load(userptr, "vkTrimCommandPoolKHR");
}
static void glad_vk_load_VK_KHR_maintenance3(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_maintenance3) return;
    context->GetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR) load(userptr, "vkGetDescriptorSetLayoutSupportKHR");
}
static void glad_vk_load_VK_KHR_maintenance4(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_maintenance4) return;
    context->GetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR) load(userptr, "vkGetDeviceBufferMemoryRequirementsKHR");
    context->GetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR) load(userptr, "vkGetDeviceImageMemoryRequirementsKHR");
    context->GetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR) load(userptr, "vkGetDeviceImageSparseMemoryRequirementsKHR");
}
static void glad_vk_load_VK_KHR_maintenance5(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_maintenance5) return;
    context->CmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR) load(userptr, "vkCmdBindIndexBuffer2KHR");
    context->GetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR) load(userptr, "vkGetDeviceImageSubresourceLayoutKHR");
    context->GetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR) load(userptr, "vkGetImageSubresourceLayout2KHR");
    context->GetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR) load(userptr, "vkGetRenderingAreaGranularityKHR");
}
static void glad_vk_load_VK_KHR_maintenance6(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_maintenance6) return;
    context->CmdBindDescriptorBufferEmbeddedSamplers2EXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT) load(userptr, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
    context->CmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR) load(userptr, "vkCmdBindDescriptorSets2KHR");
    context->CmdPushConstants2KHR = (PFN_vkCmdPushConstants2KHR) load(userptr, "vkCmdPushConstants2KHR");
    context->CmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR) load(userptr, "vkCmdPushDescriptorSet2KHR");
    context->CmdPushDescriptorSetWithTemplate2KHR = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR) load(userptr, "vkCmdPushDescriptorSetWithTemplate2KHR");
    context->CmdSetDescriptorBufferOffsets2EXT = (PFN_vkCmdSetDescriptorBufferOffsets2EXT) load(userptr, "vkCmdSetDescriptorBufferOffsets2EXT");
}
static void glad_vk_load_VK_KHR_map_memory2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_map_memory2) return;
    context->MapMemory2KHR = (PFN_vkMapMemory2KHR) load(userptr, "vkMapMemory2KHR");
    context->UnmapMemory2KHR = (PFN_vkUnmapMemory2KHR) load(userptr, "vkUnmapMemory2KHR");
}
static void glad_vk_load_VK_KHR_performance_query(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_performance_query) return;
    context->AcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR) load(userptr, "vkAcquireProfilingLockKHR");
    context->EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR) load(userptr, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
    context->GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR) load(userptr, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
    context->ReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR) load(userptr, "vkReleaseProfilingLockKHR");
}
static void glad_vk_load_VK_KHR_present_wait(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_present_wait) return;
    context->WaitForPresentKHR = (PFN_vkWaitForPresentKHR) load(userptr, "vkWaitForPresentKHR");
}
static void glad_vk_load_VK_KHR_push_descriptor(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_push_descriptor) return;
    context->CmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR) load(userptr, "vkCmdPushDescriptorSetKHR");
    context->CmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load(userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
}
static void glad_vk_load_VK_KHR_ray_tracing_maintenance1(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_ray_tracing_maintenance1) return;
    context->CmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR) load(userptr, "vkCmdTraceRaysIndirect2KHR");
}
static void glad_vk_load_VK_KHR_ray_tracing_pipeline(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_ray_tracing_pipeline) return;
    context->CmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR) load(userptr, "vkCmdSetRayTracingPipelineStackSizeKHR");
    context->CmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR) load(userptr, "vkCmdTraceRaysIndirectKHR");
    context->CmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR) load(userptr, "vkCmdTraceRaysKHR");
    context->CreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR) load(userptr, "vkCreateRayTracingPipelinesKHR");
    context->GetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR) load(userptr, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
    context->GetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR) load(userptr, "vkGetRayTracingShaderGroupHandlesKHR");
    context->GetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR) load(userptr, "vkGetRayTracingShaderGroupStackSizeKHR");
}
static void glad_vk_load_VK_KHR_sampler_ycbcr_conversion(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_sampler_ycbcr_conversion) return;
    context->CreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR) load(userptr, "vkCreateSamplerYcbcrConversionKHR");
    context->DestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR) load(userptr, "vkDestroySamplerYcbcrConversionKHR");
}
static void glad_vk_load_VK_KHR_surface(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_surface) return;
    context->DestroySurfaceKHR = (PFN_vkDestroySurfaceKHR) load(userptr, "vkDestroySurfaceKHR");
    context->GetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    context->GetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR) load(userptr, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    context->GetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR) load(userptr, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    context->GetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR) load(userptr, "vkGetPhysicalDeviceSurfaceSupportKHR");
}
static void glad_vk_load_VK_KHR_swapchain(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_swapchain) return;
    context->AcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load(userptr, "vkAcquireNextImage2KHR");
    context->AcquireNextImageKHR = (PFN_vkAcquireNextImageKHR) load(userptr, "vkAcquireNextImageKHR");
    context->CreateSwapchainKHR = (PFN_vkCreateSwapchainKHR) load(userptr, "vkCreateSwapchainKHR");
    context->DestroySwapchainKHR = (PFN_vkDestroySwapchainKHR) load(userptr, "vkDestroySwapchainKHR");
    context->GetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load(userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
    context->GetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load(userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
    context->GetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load(userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
    context->GetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR) load(userptr, "vkGetSwapchainImagesKHR");
    context->QueuePresentKHR = (PFN_vkQueuePresentKHR) load(userptr, "vkQueuePresentKHR");
}
static void glad_vk_load_VK_KHR_synchronization2(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_synchronization2) return;
    context->CmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR) load(userptr, "vkCmdPipelineBarrier2KHR");
    context->CmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR) load(userptr, "vkCmdResetEvent2KHR");
    context->CmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR) load(userptr, "vkCmdSetEvent2KHR");
    context->CmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR) load(userptr, "vkCmdWaitEvents2KHR");
    context->CmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR) load(userptr, "vkCmdWriteTimestamp2KHR");
    context->QueueSubmit2KHR = (PFN_vkQueueSubmit2KHR) load(userptr, "vkQueueSubmit2KHR");
}
static void glad_vk_load_VK_KHR_timeline_semaphore(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_timeline_semaphore) return;
    context->GetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR) load(userptr, "vkGetSemaphoreCounterValueKHR");
    context->SignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR) load(userptr, "vkSignalSemaphoreKHR");
    context->WaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR) load(userptr, "vkWaitSemaphoresKHR");
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
static void glad_vk_load_VK_KHR_wayland_surface(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_wayland_surface) return;
    context->CreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR) load(userptr, "vkCreateWaylandSurfaceKHR");
    context->GetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_win32_surface(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_win32_surface) return;
    context->CreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR) load(userptr, "vkCreateWin32SurfaceKHR");
    context->GetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
static void glad_vk_load_VK_KHR_xcb_surface(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_xcb_surface) return;
    context->CreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR) load(userptr, "vkCreateXcbSurfaceKHR");
    context->GetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
static void glad_vk_load_VK_KHR_xlib_surface(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->KHR_xlib_surface) return;
    context->CreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR) load(userptr, "vkCreateXlibSurfaceKHR");
    context->GetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
}

#endif
static void glad_vk_load_VK_NV_device_diagnostic_checkpoints(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->NV_device_diagnostic_checkpoints) return;
    context->CmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV) load(userptr, "vkCmdSetCheckpointNV");
    context->GetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV) load(userptr, "vkGetQueueCheckpointData2NV");
    context->GetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV) load(userptr, "vkGetQueueCheckpointDataNV");
}
static void glad_vk_load_VK_NV_mesh_shader(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->NV_mesh_shader) return;
    context->CmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV) load(userptr, "vkCmdDrawMeshTasksIndirectCountNV");
    context->CmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV) load(userptr, "vkCmdDrawMeshTasksIndirectNV");
    context->CmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV) load(userptr, "vkCmdDrawMeshTasksNV");
}
static void glad_vk_load_VK_NV_ray_tracing(GladVulkanContext *context, GLADuserptrloadfunc load, void* userptr) {
    if(!context->NV_ray_tracing) return;
    context->BindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV) load(userptr, "vkBindAccelerationStructureMemoryNV");
    context->CmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV) load(userptr, "vkCmdBuildAccelerationStructureNV");
    context->CmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV) load(userptr, "vkCmdCopyAccelerationStructureNV");
    context->CmdTraceRaysNV = (PFN_vkCmdTraceRaysNV) load(userptr, "vkCmdTraceRaysNV");
    context->CmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV) load(userptr, "vkCmdWriteAccelerationStructuresPropertiesNV");
    context->CompileDeferredNV = (PFN_vkCompileDeferredNV) load(userptr, "vkCompileDeferredNV");
    context->CreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV) load(userptr, "vkCreateAccelerationStructureNV");
    context->CreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV) load(userptr, "vkCreateRayTracingPipelinesNV");
    context->DestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV) load(userptr, "vkDestroyAccelerationStructureNV");
    context->GetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV) load(userptr, "vkGetAccelerationStructureHandleNV");
    context->GetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV) load(userptr, "vkGetAccelerationStructureMemoryRequirementsNV");
    context->GetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV) load(userptr, "vkGetRayTracingShaderGroupHandlesNV");
}


static void glad_vk_resolve_aliases(GladVulkanContext *context) {
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (context->BindBufferMemory2 == NULL && context->BindBufferMemory2KHR != NULL) context->BindBufferMemory2 = (PFN_vkBindBufferMemory2)context->BindBufferMemory2KHR;
    if (context->BindBufferMemory2KHR == NULL && context->BindBufferMemory2 != NULL) context->BindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)context->BindBufferMemory2;
    if (context->BindImageMemory2 == NULL && context->BindImageMemory2KHR != NULL) context->BindImageMemory2 = (PFN_vkBindImageMemory2)context->BindImageMemory2KHR;
    if (context->BindImageMemory2KHR == NULL && context->BindImageMemory2 != NULL) context->BindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)context->BindImageMemory2;
    if (context->CmdBeginRendering == NULL && context->CmdBeginRenderingKHR != NULL) context->CmdBeginRendering = (PFN_vkCmdBeginRendering)context->CmdBeginRenderingKHR;
    if (context->CmdBeginRenderingKHR == NULL && context->CmdBeginRendering != NULL) context->CmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)context->CmdBeginRendering;
    if (context->CmdBeginRenderPass2 == NULL && context->CmdBeginRenderPass2KHR != NULL) context->CmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)context->CmdBeginRenderPass2KHR;
    if (context->CmdBeginRenderPass2KHR == NULL && context->CmdBeginRenderPass2 != NULL) context->CmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)context->CmdBeginRenderPass2;
    if (context->CmdBindDescriptorSets2 == NULL && context->CmdBindDescriptorSets2KHR != NULL) context->CmdBindDescriptorSets2 = (PFN_vkCmdBindDescriptorSets2)context->CmdBindDescriptorSets2KHR;
    if (context->CmdBindDescriptorSets2KHR == NULL && context->CmdBindDescriptorSets2 != NULL) context->CmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR)context->CmdBindDescriptorSets2;
    if (context->CmdBindIndexBuffer2 == NULL && context->CmdBindIndexBuffer2KHR != NULL) context->CmdBindIndexBuffer2 = (PFN_vkCmdBindIndexBuffer2)context->CmdBindIndexBuffer2KHR;
    if (context->CmdBindIndexBuffer2KHR == NULL && context->CmdBindIndexBuffer2 != NULL) context->CmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR)context->CmdBindIndexBuffer2;
    if (context->CmdBindVertexBuffers2 == NULL && context->CmdBindVertexBuffers2EXT != NULL) context->CmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)context->CmdBindVertexBuffers2EXT;
    if (context->CmdBindVertexBuffers2EXT == NULL && context->CmdBindVertexBuffers2 != NULL) context->CmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)context->CmdBindVertexBuffers2;
    if (context->CmdBlitImage2 == NULL && context->CmdBlitImage2KHR != NULL) context->CmdBlitImage2 = (PFN_vkCmdBlitImage2)context->CmdBlitImage2KHR;
    if (context->CmdBlitImage2KHR == NULL && context->CmdBlitImage2 != NULL) context->CmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)context->CmdBlitImage2;
    if (context->CmdCopyBuffer2 == NULL && context->CmdCopyBuffer2KHR != NULL) context->CmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)context->CmdCopyBuffer2KHR;
    if (context->CmdCopyBuffer2KHR == NULL && context->CmdCopyBuffer2 != NULL) context->CmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)context->CmdCopyBuffer2;
    if (context->CmdCopyBufferToImage2 == NULL && context->CmdCopyBufferToImage2KHR != NULL) context->CmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)context->CmdCopyBufferToImage2KHR;
    if (context->CmdCopyBufferToImage2KHR == NULL && context->CmdCopyBufferToImage2 != NULL) context->CmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)context->CmdCopyBufferToImage2;
    if (context->CmdCopyImage2 == NULL && context->CmdCopyImage2KHR != NULL) context->CmdCopyImage2 = (PFN_vkCmdCopyImage2)context->CmdCopyImage2KHR;
    if (context->CmdCopyImage2KHR == NULL && context->CmdCopyImage2 != NULL) context->CmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)context->CmdCopyImage2;
    if (context->CmdCopyImageToBuffer2 == NULL && context->CmdCopyImageToBuffer2KHR != NULL) context->CmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)context->CmdCopyImageToBuffer2KHR;
    if (context->CmdCopyImageToBuffer2KHR == NULL && context->CmdCopyImageToBuffer2 != NULL) context->CmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)context->CmdCopyImageToBuffer2;
    if (context->CmdDispatchBase == NULL && context->CmdDispatchBaseKHR != NULL) context->CmdDispatchBase = (PFN_vkCmdDispatchBase)context->CmdDispatchBaseKHR;
    if (context->CmdDispatchBaseKHR == NULL && context->CmdDispatchBase != NULL) context->CmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)context->CmdDispatchBase;
    if (context->CmdDrawIndexedIndirectCount == NULL && context->CmdDrawIndexedIndirectCountAMD != NULL) context->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)context->CmdDrawIndexedIndirectCountAMD;
    if (context->CmdDrawIndexedIndirectCount == NULL && context->CmdDrawIndexedIndirectCountKHR != NULL) context->CmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)context->CmdDrawIndexedIndirectCountKHR;
    if (context->CmdDrawIndexedIndirectCountAMD == NULL && context->CmdDrawIndexedIndirectCount != NULL) context->CmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)context->CmdDrawIndexedIndirectCount;
    if (context->CmdDrawIndexedIndirectCountAMD == NULL && context->CmdDrawIndexedIndirectCountKHR != NULL) context->CmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)context->CmdDrawIndexedIndirectCountKHR;
    if (context->CmdDrawIndexedIndirectCountKHR == NULL && context->CmdDrawIndexedIndirectCount != NULL) context->CmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)context->CmdDrawIndexedIndirectCount;
    if (context->CmdDrawIndexedIndirectCountKHR == NULL && context->CmdDrawIndexedIndirectCountAMD != NULL) context->CmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)context->CmdDrawIndexedIndirectCountAMD;
    if (context->CmdDrawIndirectCount == NULL && context->CmdDrawIndirectCountAMD != NULL) context->CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)context->CmdDrawIndirectCountAMD;
    if (context->CmdDrawIndirectCount == NULL && context->CmdDrawIndirectCountKHR != NULL) context->CmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)context->CmdDrawIndirectCountKHR;
    if (context->CmdDrawIndirectCountAMD == NULL && context->CmdDrawIndirectCount != NULL) context->CmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)context->CmdDrawIndirectCount;
    if (context->CmdDrawIndirectCountAMD == NULL && context->CmdDrawIndirectCountKHR != NULL) context->CmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)context->CmdDrawIndirectCountKHR;
    if (context->CmdDrawIndirectCountKHR == NULL && context->CmdDrawIndirectCount != NULL) context->CmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)context->CmdDrawIndirectCount;
    if (context->CmdDrawIndirectCountKHR == NULL && context->CmdDrawIndirectCountAMD != NULL) context->CmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)context->CmdDrawIndirectCountAMD;
    if (context->CmdEndRendering == NULL && context->CmdEndRenderingKHR != NULL) context->CmdEndRendering = (PFN_vkCmdEndRendering)context->CmdEndRenderingKHR;
    if (context->CmdEndRenderingKHR == NULL && context->CmdEndRendering != NULL) context->CmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)context->CmdEndRendering;
    if (context->CmdEndRenderPass2 == NULL && context->CmdEndRenderPass2KHR != NULL) context->CmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)context->CmdEndRenderPass2KHR;
    if (context->CmdEndRenderPass2KHR == NULL && context->CmdEndRenderPass2 != NULL) context->CmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)context->CmdEndRenderPass2;
    if (context->CmdNextSubpass2 == NULL && context->CmdNextSubpass2KHR != NULL) context->CmdNextSubpass2 = (PFN_vkCmdNextSubpass2)context->CmdNextSubpass2KHR;
    if (context->CmdNextSubpass2KHR == NULL && context->CmdNextSubpass2 != NULL) context->CmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)context->CmdNextSubpass2;
    if (context->CmdPipelineBarrier2 == NULL && context->CmdPipelineBarrier2KHR != NULL) context->CmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)context->CmdPipelineBarrier2KHR;
    if (context->CmdPipelineBarrier2KHR == NULL && context->CmdPipelineBarrier2 != NULL) context->CmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)context->CmdPipelineBarrier2;
    if (context->CmdPushConstants2 == NULL && context->CmdPushConstants2KHR != NULL) context->CmdPushConstants2 = (PFN_vkCmdPushConstants2)context->CmdPushConstants2KHR;
    if (context->CmdPushConstants2KHR == NULL && context->CmdPushConstants2 != NULL) context->CmdPushConstants2KHR = (PFN_vkCmdPushConstants2KHR)context->CmdPushConstants2;
    if (context->CmdPushDescriptorSet == NULL && context->CmdPushDescriptorSetKHR != NULL) context->CmdPushDescriptorSet = (PFN_vkCmdPushDescriptorSet)context->CmdPushDescriptorSetKHR;
    if (context->CmdPushDescriptorSet2 == NULL && context->CmdPushDescriptorSet2KHR != NULL) context->CmdPushDescriptorSet2 = (PFN_vkCmdPushDescriptorSet2)context->CmdPushDescriptorSet2KHR;
    if (context->CmdPushDescriptorSet2KHR == NULL && context->CmdPushDescriptorSet2 != NULL) context->CmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR)context->CmdPushDescriptorSet2;
    if (context->CmdPushDescriptorSetKHR == NULL && context->CmdPushDescriptorSet != NULL) context->CmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)context->CmdPushDescriptorSet;
    if (context->CmdPushDescriptorSetWithTemplate == NULL && context->CmdPushDescriptorSetWithTemplateKHR != NULL) context->CmdPushDescriptorSetWithTemplate = (PFN_vkCmdPushDescriptorSetWithTemplate)context->CmdPushDescriptorSetWithTemplateKHR;
    if (context->CmdPushDescriptorSetWithTemplate2 == NULL && context->CmdPushDescriptorSetWithTemplate2KHR != NULL) context->CmdPushDescriptorSetWithTemplate2 = (PFN_vkCmdPushDescriptorSetWithTemplate2)context->CmdPushDescriptorSetWithTemplate2KHR;
    if (context->CmdPushDescriptorSetWithTemplate2KHR == NULL && context->CmdPushDescriptorSetWithTemplate2 != NULL) context->CmdPushDescriptorSetWithTemplate2KHR = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR)context->CmdPushDescriptorSetWithTemplate2;
    if (context->CmdPushDescriptorSetWithTemplateKHR == NULL && context->CmdPushDescriptorSetWithTemplate != NULL) context->CmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)context->CmdPushDescriptorSetWithTemplate;
    if (context->CmdResetEvent2 == NULL && context->CmdResetEvent2KHR != NULL) context->CmdResetEvent2 = (PFN_vkCmdResetEvent2)context->CmdResetEvent2KHR;
    if (context->CmdResetEvent2KHR == NULL && context->CmdResetEvent2 != NULL) context->CmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)context->CmdResetEvent2;
    if (context->CmdResolveImage2 == NULL && context->CmdResolveImage2KHR != NULL) context->CmdResolveImage2 = (PFN_vkCmdResolveImage2)context->CmdResolveImage2KHR;
    if (context->CmdResolveImage2KHR == NULL && context->CmdResolveImage2 != NULL) context->CmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)context->CmdResolveImage2;
    if (context->CmdSetCullMode == NULL && context->CmdSetCullModeEXT != NULL) context->CmdSetCullMode = (PFN_vkCmdSetCullMode)context->CmdSetCullModeEXT;
    if (context->CmdSetCullModeEXT == NULL && context->CmdSetCullMode != NULL) context->CmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)context->CmdSetCullMode;
    if (context->CmdSetDepthBiasEnable == NULL && context->CmdSetDepthBiasEnableEXT != NULL) context->CmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)context->CmdSetDepthBiasEnableEXT;
    if (context->CmdSetDepthBiasEnableEXT == NULL && context->CmdSetDepthBiasEnable != NULL) context->CmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)context->CmdSetDepthBiasEnable;
    if (context->CmdSetDepthBoundsTestEnable == NULL && context->CmdSetDepthBoundsTestEnableEXT != NULL) context->CmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)context->CmdSetDepthBoundsTestEnableEXT;
    if (context->CmdSetDepthBoundsTestEnableEXT == NULL && context->CmdSetDepthBoundsTestEnable != NULL) context->CmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)context->CmdSetDepthBoundsTestEnable;
    if (context->CmdSetDepthCompareOp == NULL && context->CmdSetDepthCompareOpEXT != NULL) context->CmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)context->CmdSetDepthCompareOpEXT;
    if (context->CmdSetDepthCompareOpEXT == NULL && context->CmdSetDepthCompareOp != NULL) context->CmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)context->CmdSetDepthCompareOp;
    if (context->CmdSetDepthTestEnable == NULL && context->CmdSetDepthTestEnableEXT != NULL) context->CmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)context->CmdSetDepthTestEnableEXT;
    if (context->CmdSetDepthTestEnableEXT == NULL && context->CmdSetDepthTestEnable != NULL) context->CmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)context->CmdSetDepthTestEnable;
    if (context->CmdSetDepthWriteEnable == NULL && context->CmdSetDepthWriteEnableEXT != NULL) context->CmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)context->CmdSetDepthWriteEnableEXT;
    if (context->CmdSetDepthWriteEnableEXT == NULL && context->CmdSetDepthWriteEnable != NULL) context->CmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)context->CmdSetDepthWriteEnable;
    if (context->CmdSetDeviceMask == NULL && context->CmdSetDeviceMaskKHR != NULL) context->CmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)context->CmdSetDeviceMaskKHR;
    if (context->CmdSetDeviceMaskKHR == NULL && context->CmdSetDeviceMask != NULL) context->CmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)context->CmdSetDeviceMask;
    if (context->CmdSetEvent2 == NULL && context->CmdSetEvent2KHR != NULL) context->CmdSetEvent2 = (PFN_vkCmdSetEvent2)context->CmdSetEvent2KHR;
    if (context->CmdSetEvent2KHR == NULL && context->CmdSetEvent2 != NULL) context->CmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)context->CmdSetEvent2;
    if (context->CmdSetFrontFace == NULL && context->CmdSetFrontFaceEXT != NULL) context->CmdSetFrontFace = (PFN_vkCmdSetFrontFace)context->CmdSetFrontFaceEXT;
    if (context->CmdSetFrontFaceEXT == NULL && context->CmdSetFrontFace != NULL) context->CmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)context->CmdSetFrontFace;
    if (context->CmdSetLineStipple == NULL && context->CmdSetLineStippleEXT != NULL) context->CmdSetLineStipple = (PFN_vkCmdSetLineStipple)context->CmdSetLineStippleEXT;
    if (context->CmdSetLineStipple == NULL && context->CmdSetLineStippleKHR != NULL) context->CmdSetLineStipple = (PFN_vkCmdSetLineStipple)context->CmdSetLineStippleKHR;
    if (context->CmdSetLineStippleEXT == NULL && context->CmdSetLineStipple != NULL) context->CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)context->CmdSetLineStipple;
    if (context->CmdSetLineStippleEXT == NULL && context->CmdSetLineStippleKHR != NULL) context->CmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)context->CmdSetLineStippleKHR;
    if (context->CmdSetLineStippleKHR == NULL && context->CmdSetLineStipple != NULL) context->CmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)context->CmdSetLineStipple;
    if (context->CmdSetLineStippleKHR == NULL && context->CmdSetLineStippleEXT != NULL) context->CmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)context->CmdSetLineStippleEXT;
    if (context->CmdSetPrimitiveRestartEnable == NULL && context->CmdSetPrimitiveRestartEnableEXT != NULL) context->CmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)context->CmdSetPrimitiveRestartEnableEXT;
    if (context->CmdSetPrimitiveRestartEnableEXT == NULL && context->CmdSetPrimitiveRestartEnable != NULL) context->CmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)context->CmdSetPrimitiveRestartEnable;
    if (context->CmdSetPrimitiveTopology == NULL && context->CmdSetPrimitiveTopologyEXT != NULL) context->CmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)context->CmdSetPrimitiveTopologyEXT;
    if (context->CmdSetPrimitiveTopologyEXT == NULL && context->CmdSetPrimitiveTopology != NULL) context->CmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)context->CmdSetPrimitiveTopology;
    if (context->CmdSetRasterizerDiscardEnable == NULL && context->CmdSetRasterizerDiscardEnableEXT != NULL) context->CmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)context->CmdSetRasterizerDiscardEnableEXT;
    if (context->CmdSetRasterizerDiscardEnableEXT == NULL && context->CmdSetRasterizerDiscardEnable != NULL) context->CmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)context->CmdSetRasterizerDiscardEnable;
    if (context->CmdSetRenderingAttachmentLocations == NULL && context->CmdSetRenderingAttachmentLocationsKHR != NULL) context->CmdSetRenderingAttachmentLocations = (PFN_vkCmdSetRenderingAttachmentLocations)context->CmdSetRenderingAttachmentLocationsKHR;
    if (context->CmdSetRenderingAttachmentLocationsKHR == NULL && context->CmdSetRenderingAttachmentLocations != NULL) context->CmdSetRenderingAttachmentLocationsKHR = (PFN_vkCmdSetRenderingAttachmentLocationsKHR)context->CmdSetRenderingAttachmentLocations;
    if (context->CmdSetRenderingInputAttachmentIndices == NULL && context->CmdSetRenderingInputAttachmentIndicesKHR != NULL) context->CmdSetRenderingInputAttachmentIndices = (PFN_vkCmdSetRenderingInputAttachmentIndices)context->CmdSetRenderingInputAttachmentIndicesKHR;
    if (context->CmdSetRenderingInputAttachmentIndicesKHR == NULL && context->CmdSetRenderingInputAttachmentIndices != NULL) context->CmdSetRenderingInputAttachmentIndicesKHR = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR)context->CmdSetRenderingInputAttachmentIndices;
    if (context->CmdSetScissorWithCount == NULL && context->CmdSetScissorWithCountEXT != NULL) context->CmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)context->CmdSetScissorWithCountEXT;
    if (context->CmdSetScissorWithCountEXT == NULL && context->CmdSetScissorWithCount != NULL) context->CmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)context->CmdSetScissorWithCount;
    if (context->CmdSetStencilOp == NULL && context->CmdSetStencilOpEXT != NULL) context->CmdSetStencilOp = (PFN_vkCmdSetStencilOp)context->CmdSetStencilOpEXT;
    if (context->CmdSetStencilOpEXT == NULL && context->CmdSetStencilOp != NULL) context->CmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)context->CmdSetStencilOp;
    if (context->CmdSetStencilTestEnable == NULL && context->CmdSetStencilTestEnableEXT != NULL) context->CmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)context->CmdSetStencilTestEnableEXT;
    if (context->CmdSetStencilTestEnableEXT == NULL && context->CmdSetStencilTestEnable != NULL) context->CmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)context->CmdSetStencilTestEnable;
    if (context->CmdSetViewportWithCount == NULL && context->CmdSetViewportWithCountEXT != NULL) context->CmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)context->CmdSetViewportWithCountEXT;
    if (context->CmdSetViewportWithCountEXT == NULL && context->CmdSetViewportWithCount != NULL) context->CmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)context->CmdSetViewportWithCount;
    if (context->CmdWaitEvents2 == NULL && context->CmdWaitEvents2KHR != NULL) context->CmdWaitEvents2 = (PFN_vkCmdWaitEvents2)context->CmdWaitEvents2KHR;
    if (context->CmdWaitEvents2KHR == NULL && context->CmdWaitEvents2 != NULL) context->CmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)context->CmdWaitEvents2;
    if (context->CmdWriteTimestamp2 == NULL && context->CmdWriteTimestamp2KHR != NULL) context->CmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)context->CmdWriteTimestamp2KHR;
    if (context->CmdWriteTimestamp2KHR == NULL && context->CmdWriteTimestamp2 != NULL) context->CmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)context->CmdWriteTimestamp2;
    if (context->CopyImageToImage == NULL && context->CopyImageToImageEXT != NULL) context->CopyImageToImage = (PFN_vkCopyImageToImage)context->CopyImageToImageEXT;
    if (context->CopyImageToImageEXT == NULL && context->CopyImageToImage != NULL) context->CopyImageToImageEXT = (PFN_vkCopyImageToImageEXT)context->CopyImageToImage;
    if (context->CopyImageToMemory == NULL && context->CopyImageToMemoryEXT != NULL) context->CopyImageToMemory = (PFN_vkCopyImageToMemory)context->CopyImageToMemoryEXT;
    if (context->CopyImageToMemoryEXT == NULL && context->CopyImageToMemory != NULL) context->CopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT)context->CopyImageToMemory;
    if (context->CopyMemoryToImage == NULL && context->CopyMemoryToImageEXT != NULL) context->CopyMemoryToImage = (PFN_vkCopyMemoryToImage)context->CopyMemoryToImageEXT;
    if (context->CopyMemoryToImageEXT == NULL && context->CopyMemoryToImage != NULL) context->CopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT)context->CopyMemoryToImage;
    if (context->CreateDescriptorUpdateTemplate == NULL && context->CreateDescriptorUpdateTemplateKHR != NULL) context->CreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)context->CreateDescriptorUpdateTemplateKHR;
    if (context->CreateDescriptorUpdateTemplateKHR == NULL && context->CreateDescriptorUpdateTemplate != NULL) context->CreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)context->CreateDescriptorUpdateTemplate;
    if (context->CreatePrivateDataSlot == NULL && context->CreatePrivateDataSlotEXT != NULL) context->CreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)context->CreatePrivateDataSlotEXT;
    if (context->CreatePrivateDataSlotEXT == NULL && context->CreatePrivateDataSlot != NULL) context->CreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)context->CreatePrivateDataSlot;
    if (context->CreateRenderPass2 == NULL && context->CreateRenderPass2KHR != NULL) context->CreateRenderPass2 = (PFN_vkCreateRenderPass2)context->CreateRenderPass2KHR;
    if (context->CreateRenderPass2KHR == NULL && context->CreateRenderPass2 != NULL) context->CreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)context->CreateRenderPass2;
    if (context->CreateSamplerYcbcrConversion == NULL && context->CreateSamplerYcbcrConversionKHR != NULL) context->CreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)context->CreateSamplerYcbcrConversionKHR;
    if (context->CreateSamplerYcbcrConversionKHR == NULL && context->CreateSamplerYcbcrConversion != NULL) context->CreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)context->CreateSamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
    if (context->DestroyDescriptorUpdateTemplate == NULL && context->DestroyDescriptorUpdateTemplateKHR != NULL) context->DestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)context->DestroyDescriptorUpdateTemplateKHR;
    if (context->DestroyDescriptorUpdateTemplateKHR == NULL && context->DestroyDescriptorUpdateTemplate != NULL) context->DestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)context->DestroyDescriptorUpdateTemplate;
    if (context->DestroyPrivateDataSlot == NULL && context->DestroyPrivateDataSlotEXT != NULL) context->DestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)context->DestroyPrivateDataSlotEXT;
    if (context->DestroyPrivateDataSlotEXT == NULL && context->DestroyPrivateDataSlot != NULL) context->DestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)context->DestroyPrivateDataSlot;
    if (context->DestroySamplerYcbcrConversion == NULL && context->DestroySamplerYcbcrConversionKHR != NULL) context->DestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)context->DestroySamplerYcbcrConversionKHR;
    if (context->DestroySamplerYcbcrConversionKHR == NULL && context->DestroySamplerYcbcrConversion != NULL) context->DestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)context->DestroySamplerYcbcrConversion;
    if (context->EnumeratePhysicalDeviceGroups == NULL && context->EnumeratePhysicalDeviceGroupsKHR != NULL) context->EnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)context->EnumeratePhysicalDeviceGroupsKHR;
    if (context->EnumeratePhysicalDeviceGroupsKHR == NULL && context->EnumeratePhysicalDeviceGroups != NULL) context->EnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)context->EnumeratePhysicalDeviceGroups;
    if (context->GetBufferDeviceAddress == NULL && context->GetBufferDeviceAddressEXT != NULL) context->GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)context->GetBufferDeviceAddressEXT;
    if (context->GetBufferDeviceAddress == NULL && context->GetBufferDeviceAddressKHR != NULL) context->GetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)context->GetBufferDeviceAddressKHR;
    if (context->GetBufferDeviceAddressEXT == NULL && context->GetBufferDeviceAddress != NULL) context->GetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)context->GetBufferDeviceAddress;
    if (context->GetBufferDeviceAddressEXT == NULL && context->GetBufferDeviceAddressKHR != NULL) context->GetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)context->GetBufferDeviceAddressKHR;
    if (context->GetBufferDeviceAddressKHR == NULL && context->GetBufferDeviceAddress != NULL) context->GetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)context->GetBufferDeviceAddress;
    if (context->GetBufferDeviceAddressKHR == NULL && context->GetBufferDeviceAddressEXT != NULL) context->GetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)context->GetBufferDeviceAddressEXT;
    if (context->GetBufferMemoryRequirements2 == NULL && context->GetBufferMemoryRequirements2KHR != NULL) context->GetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)context->GetBufferMemoryRequirements2KHR;
    if (context->GetBufferMemoryRequirements2KHR == NULL && context->GetBufferMemoryRequirements2 != NULL) context->GetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)context->GetBufferMemoryRequirements2;
    if (context->GetBufferOpaqueCaptureAddress == NULL && context->GetBufferOpaqueCaptureAddressKHR != NULL) context->GetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)context->GetBufferOpaqueCaptureAddressKHR;
    if (context->GetBufferOpaqueCaptureAddressKHR == NULL && context->GetBufferOpaqueCaptureAddress != NULL) context->GetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)context->GetBufferOpaqueCaptureAddress;
    if (context->GetDescriptorSetLayoutSupport == NULL && context->GetDescriptorSetLayoutSupportKHR != NULL) context->GetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)context->GetDescriptorSetLayoutSupportKHR;
    if (context->GetDescriptorSetLayoutSupportKHR == NULL && context->GetDescriptorSetLayoutSupport != NULL) context->GetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)context->GetDescriptorSetLayoutSupport;
    if (context->GetDeviceBufferMemoryRequirements == NULL && context->GetDeviceBufferMemoryRequirementsKHR != NULL) context->GetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)context->GetDeviceBufferMemoryRequirementsKHR;
    if (context->GetDeviceBufferMemoryRequirementsKHR == NULL && context->GetDeviceBufferMemoryRequirements != NULL) context->GetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)context->GetDeviceBufferMemoryRequirements;
    if (context->GetDeviceGroupPeerMemoryFeatures == NULL && context->GetDeviceGroupPeerMemoryFeaturesKHR != NULL) context->GetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)context->GetDeviceGroupPeerMemoryFeaturesKHR;
    if (context->GetDeviceGroupPeerMemoryFeaturesKHR == NULL && context->GetDeviceGroupPeerMemoryFeatures != NULL) context->GetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)context->GetDeviceGroupPeerMemoryFeatures;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (context->GetDeviceImageMemoryRequirements == NULL && context->GetDeviceImageMemoryRequirementsKHR != NULL) context->GetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)context->GetDeviceImageMemoryRequirementsKHR;
    if (context->GetDeviceImageMemoryRequirementsKHR == NULL && context->GetDeviceImageMemoryRequirements != NULL) context->GetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)context->GetDeviceImageMemoryRequirements;
    if (context->GetDeviceImageSparseMemoryRequirements == NULL && context->GetDeviceImageSparseMemoryRequirementsKHR != NULL) context->GetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)context->GetDeviceImageSparseMemoryRequirementsKHR;
    if (context->GetDeviceImageSparseMemoryRequirementsKHR == NULL && context->GetDeviceImageSparseMemoryRequirements != NULL) context->GetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)context->GetDeviceImageSparseMemoryRequirements;
    if (context->GetDeviceImageSubresourceLayout == NULL && context->GetDeviceImageSubresourceLayoutKHR != NULL) context->GetDeviceImageSubresourceLayout = (PFN_vkGetDeviceImageSubresourceLayout)context->GetDeviceImageSubresourceLayoutKHR;
    if (context->GetDeviceImageSubresourceLayoutKHR == NULL && context->GetDeviceImageSubresourceLayout != NULL) context->GetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR)context->GetDeviceImageSubresourceLayout;
    if (context->GetDeviceMemoryOpaqueCaptureAddress == NULL && context->GetDeviceMemoryOpaqueCaptureAddressKHR != NULL) context->GetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)context->GetDeviceMemoryOpaqueCaptureAddressKHR;
    if (context->GetDeviceMemoryOpaqueCaptureAddressKHR == NULL && context->GetDeviceMemoryOpaqueCaptureAddress != NULL) context->GetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)context->GetDeviceMemoryOpaqueCaptureAddress;
    if (context->GetImageMemoryRequirements2 == NULL && context->GetImageMemoryRequirements2KHR != NULL) context->GetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)context->GetImageMemoryRequirements2KHR;
    if (context->GetImageMemoryRequirements2KHR == NULL && context->GetImageMemoryRequirements2 != NULL) context->GetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)context->GetImageMemoryRequirements2;
    if (context->GetImageSparseMemoryRequirements2 == NULL && context->GetImageSparseMemoryRequirements2KHR != NULL) context->GetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)context->GetImageSparseMemoryRequirements2KHR;
    if (context->GetImageSparseMemoryRequirements2KHR == NULL && context->GetImageSparseMemoryRequirements2 != NULL) context->GetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)context->GetImageSparseMemoryRequirements2;
    if (context->GetImageSubresourceLayout2 == NULL && context->GetImageSubresourceLayout2EXT != NULL) context->GetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)context->GetImageSubresourceLayout2EXT;
    if (context->GetImageSubresourceLayout2 == NULL && context->GetImageSubresourceLayout2KHR != NULL) context->GetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)context->GetImageSubresourceLayout2KHR;
    if (context->GetImageSubresourceLayout2EXT == NULL && context->GetImageSubresourceLayout2 != NULL) context->GetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)context->GetImageSubresourceLayout2;
    if (context->GetImageSubresourceLayout2EXT == NULL && context->GetImageSubresourceLayout2KHR != NULL) context->GetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)context->GetImageSubresourceLayout2KHR;
    if (context->GetImageSubresourceLayout2KHR == NULL && context->GetImageSubresourceLayout2 != NULL) context->GetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)context->GetImageSubresourceLayout2;
    if (context->GetImageSubresourceLayout2KHR == NULL && context->GetImageSubresourceLayout2EXT != NULL) context->GetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)context->GetImageSubresourceLayout2EXT;
    if (context->GetPhysicalDeviceExternalBufferProperties == NULL && context->GetPhysicalDeviceExternalBufferPropertiesKHR != NULL) context->GetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)context->GetPhysicalDeviceExternalBufferPropertiesKHR;
    if (context->GetPhysicalDeviceExternalBufferPropertiesKHR == NULL && context->GetPhysicalDeviceExternalBufferProperties != NULL) context->GetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)context->GetPhysicalDeviceExternalBufferProperties;
    if (context->GetPhysicalDeviceExternalFenceProperties == NULL && context->GetPhysicalDeviceExternalFencePropertiesKHR != NULL) context->GetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)context->GetPhysicalDeviceExternalFencePropertiesKHR;
    if (context->GetPhysicalDeviceExternalFencePropertiesKHR == NULL && context->GetPhysicalDeviceExternalFenceProperties != NULL) context->GetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)context->GetPhysicalDeviceExternalFenceProperties;
    if (context->GetPhysicalDeviceExternalSemaphoreProperties == NULL && context->GetPhysicalDeviceExternalSemaphorePropertiesKHR != NULL) context->GetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)context->GetPhysicalDeviceExternalSemaphorePropertiesKHR;
    if (context->GetPhysicalDeviceExternalSemaphorePropertiesKHR == NULL && context->GetPhysicalDeviceExternalSemaphoreProperties != NULL) context->GetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)context->GetPhysicalDeviceExternalSemaphoreProperties;
    if (context->GetPhysicalDeviceFeatures2 == NULL && context->GetPhysicalDeviceFeatures2KHR != NULL) context->GetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)context->GetPhysicalDeviceFeatures2KHR;
    if (context->GetPhysicalDeviceFeatures2KHR == NULL && context->GetPhysicalDeviceFeatures2 != NULL) context->GetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)context->GetPhysicalDeviceFeatures2;
    if (context->GetPhysicalDeviceFormatProperties2 == NULL && context->GetPhysicalDeviceFormatProperties2KHR != NULL) context->GetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)context->GetPhysicalDeviceFormatProperties2KHR;
    if (context->GetPhysicalDeviceFormatProperties2KHR == NULL && context->GetPhysicalDeviceFormatProperties2 != NULL) context->GetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)context->GetPhysicalDeviceFormatProperties2;
    if (context->GetPhysicalDeviceImageFormatProperties2 == NULL && context->GetPhysicalDeviceImageFormatProperties2KHR != NULL) context->GetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)context->GetPhysicalDeviceImageFormatProperties2KHR;
    if (context->GetPhysicalDeviceImageFormatProperties2KHR == NULL && context->GetPhysicalDeviceImageFormatProperties2 != NULL) context->GetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)context->GetPhysicalDeviceImageFormatProperties2;
    if (context->GetPhysicalDeviceMemoryProperties2 == NULL && context->GetPhysicalDeviceMemoryProperties2KHR != NULL) context->GetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)context->GetPhysicalDeviceMemoryProperties2KHR;
    if (context->GetPhysicalDeviceMemoryProperties2KHR == NULL && context->GetPhysicalDeviceMemoryProperties2 != NULL) context->GetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)context->GetPhysicalDeviceMemoryProperties2;
    if (context->GetPhysicalDeviceProperties2 == NULL && context->GetPhysicalDeviceProperties2KHR != NULL) context->GetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)context->GetPhysicalDeviceProperties2KHR;
    if (context->GetPhysicalDeviceProperties2KHR == NULL && context->GetPhysicalDeviceProperties2 != NULL) context->GetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)context->GetPhysicalDeviceProperties2;
    if (context->GetPhysicalDeviceQueueFamilyProperties2 == NULL && context->GetPhysicalDeviceQueueFamilyProperties2KHR != NULL) context->GetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)context->GetPhysicalDeviceQueueFamilyProperties2KHR;
    if (context->GetPhysicalDeviceQueueFamilyProperties2KHR == NULL && context->GetPhysicalDeviceQueueFamilyProperties2 != NULL) context->GetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)context->GetPhysicalDeviceQueueFamilyProperties2;
    if (context->GetPhysicalDeviceSparseImageFormatProperties2 == NULL && context->GetPhysicalDeviceSparseImageFormatProperties2KHR != NULL) context->GetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)context->GetPhysicalDeviceSparseImageFormatProperties2KHR;
    if (context->GetPhysicalDeviceSparseImageFormatProperties2KHR == NULL && context->GetPhysicalDeviceSparseImageFormatProperties2 != NULL) context->GetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)context->GetPhysicalDeviceSparseImageFormatProperties2;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (context->GetPhysicalDeviceToolProperties == NULL && context->GetPhysicalDeviceToolPropertiesEXT != NULL) context->GetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)context->GetPhysicalDeviceToolPropertiesEXT;
    if (context->GetPhysicalDeviceToolPropertiesEXT == NULL && context->GetPhysicalDeviceToolProperties != NULL) context->GetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)context->GetPhysicalDeviceToolProperties;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
    if (context->GetPrivateData == NULL && context->GetPrivateDataEXT != NULL) context->GetPrivateData = (PFN_vkGetPrivateData)context->GetPrivateDataEXT;
    if (context->GetPrivateDataEXT == NULL && context->GetPrivateData != NULL) context->GetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)context->GetPrivateData;
    if (context->GetRayTracingShaderGroupHandlesKHR == NULL && context->GetRayTracingShaderGroupHandlesNV != NULL) context->GetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)context->GetRayTracingShaderGroupHandlesNV;
    if (context->GetRayTracingShaderGroupHandlesNV == NULL && context->GetRayTracingShaderGroupHandlesKHR != NULL) context->GetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)context->GetRayTracingShaderGroupHandlesKHR;
    if (context->GetRenderingAreaGranularity == NULL && context->GetRenderingAreaGranularityKHR != NULL) context->GetRenderingAreaGranularity = (PFN_vkGetRenderingAreaGranularity)context->GetRenderingAreaGranularityKHR;
    if (context->GetRenderingAreaGranularityKHR == NULL && context->GetRenderingAreaGranularity != NULL) context->GetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR)context->GetRenderingAreaGranularity;
    if (context->GetSemaphoreCounterValue == NULL && context->GetSemaphoreCounterValueKHR != NULL) context->GetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)context->GetSemaphoreCounterValueKHR;
    if (context->GetSemaphoreCounterValueKHR == NULL && context->GetSemaphoreCounterValue != NULL) context->GetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)context->GetSemaphoreCounterValue;
    if (context->MapMemory2 == NULL && context->MapMemory2KHR != NULL) context->MapMemory2 = (PFN_vkMapMemory2)context->MapMemory2KHR;
    if (context->MapMemory2KHR == NULL && context->MapMemory2 != NULL) context->MapMemory2KHR = (PFN_vkMapMemory2KHR)context->MapMemory2;
    if (context->QueueSubmit2 == NULL && context->QueueSubmit2KHR != NULL) context->QueueSubmit2 = (PFN_vkQueueSubmit2)context->QueueSubmit2KHR;
    if (context->QueueSubmit2KHR == NULL && context->QueueSubmit2 != NULL) context->QueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)context->QueueSubmit2;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (context->ResetQueryPool == NULL && context->ResetQueryPoolEXT != NULL) context->ResetQueryPool = (PFN_vkResetQueryPool)context->ResetQueryPoolEXT;
    if (context->ResetQueryPoolEXT == NULL && context->ResetQueryPool != NULL) context->ResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)context->ResetQueryPool;
    if (context->SetPrivateData == NULL && context->SetPrivateDataEXT != NULL) context->SetPrivateData = (PFN_vkSetPrivateData)context->SetPrivateDataEXT;
    if (context->SetPrivateDataEXT == NULL && context->SetPrivateData != NULL) context->SetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)context->SetPrivateData;
    if (context->SignalSemaphore == NULL && context->SignalSemaphoreKHR != NULL) context->SignalSemaphore = (PFN_vkSignalSemaphore)context->SignalSemaphoreKHR;
    if (context->SignalSemaphoreKHR == NULL && context->SignalSemaphore != NULL) context->SignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)context->SignalSemaphore;
    if (context->TransitionImageLayout == NULL && context->TransitionImageLayoutEXT != NULL) context->TransitionImageLayout = (PFN_vkTransitionImageLayout)context->TransitionImageLayoutEXT;
    if (context->TransitionImageLayoutEXT == NULL && context->TransitionImageLayout != NULL) context->TransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)context->TransitionImageLayout;
    if (context->TrimCommandPool == NULL && context->TrimCommandPoolKHR != NULL) context->TrimCommandPool = (PFN_vkTrimCommandPool)context->TrimCommandPoolKHR;
    if (context->TrimCommandPoolKHR == NULL && context->TrimCommandPool != NULL) context->TrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)context->TrimCommandPool;
    if (context->UnmapMemory2 == NULL && context->UnmapMemory2KHR != NULL) context->UnmapMemory2 = (PFN_vkUnmapMemory2)context->UnmapMemory2KHR;
    if (context->UnmapMemory2KHR == NULL && context->UnmapMemory2 != NULL) context->UnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)context->UnmapMemory2;
    if (context->UpdateDescriptorSetWithTemplate == NULL && context->UpdateDescriptorSetWithTemplateKHR != NULL) context->UpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)context->UpdateDescriptorSetWithTemplateKHR;
    if (context->UpdateDescriptorSetWithTemplateKHR == NULL && context->UpdateDescriptorSetWithTemplate != NULL) context->UpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)context->UpdateDescriptorSetWithTemplate;
    if (context->WaitSemaphores == NULL && context->WaitSemaphoresKHR != NULL) context->WaitSemaphores = (PFN_vkWaitSemaphores)context->WaitSemaphoresKHR;
    if (context->WaitSemaphoresKHR == NULL && context->WaitSemaphores != NULL) context->WaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)context->WaitSemaphores;
}

static int glad_vk_get_extensions(GladVulkanContext *context, VkPhysicalDevice physical_device, uint32_t *out_extension_count, char ***out_extensions) {
    uint32_t i;
    uint32_t instance_extension_count = 0;
    uint32_t device_extension_count = 0;
    uint32_t max_extension_count = 0;
    uint32_t total_extension_count = 0;
    char **extensions = NULL;
    VkExtensionProperties *ext_properties = NULL;
    VkResult result;

    if (context->EnumerateInstanceExtensionProperties == NULL || (physical_device != NULL && context->EnumerateDeviceExtensionProperties == NULL)) {
        return 0;
    }

    result = context->EnumerateInstanceExtensionProperties(NULL, &instance_extension_count, NULL);
    if (result != VK_SUCCESS) {
        return 0;
    }

    if (physical_device != NULL) {
        result = context->EnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, NULL);
        if (result != VK_SUCCESS) {
            return 0;
        }
    }

    total_extension_count = instance_extension_count + device_extension_count;
    if (total_extension_count <= 0) {
        return 0;
    }

    max_extension_count = instance_extension_count > device_extension_count
        ? instance_extension_count : device_extension_count;

    ext_properties = (VkExtensionProperties*) malloc(max_extension_count * sizeof(VkExtensionProperties));
    if (ext_properties == NULL) {
        goto glad_vk_get_extensions_error;
    }

    result = context->EnumerateInstanceExtensionProperties(NULL, &instance_extension_count, ext_properties);
    if (result != VK_SUCCESS) {
        goto glad_vk_get_extensions_error;
    }

    extensions = (char**) calloc(total_extension_count, sizeof(char*));
    if (extensions == NULL) {
        goto glad_vk_get_extensions_error;
    }

    for (i = 0; i < instance_extension_count; ++i) {
        VkExtensionProperties ext = ext_properties[i];

        size_t extension_name_length = strlen(ext.extensionName) + 1;
        extensions[i] = (char*) malloc(extension_name_length * sizeof(char));
        if (extensions[i] == NULL) {
            goto glad_vk_get_extensions_error;
        }
        memcpy(extensions[i], ext.extensionName, extension_name_length * sizeof(char));
    }

    if (physical_device != NULL) {
        result = context->EnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, ext_properties);
        if (result != VK_SUCCESS) {
            goto glad_vk_get_extensions_error;
        }

        for (i = 0; i < device_extension_count; ++i) {
            VkExtensionProperties ext = ext_properties[i];

            size_t extension_name_length = strlen(ext.extensionName) + 1;
            extensions[instance_extension_count + i] = (char*) malloc(extension_name_length * sizeof(char));
            if (extensions[instance_extension_count + i] == NULL) {
                goto glad_vk_get_extensions_error;
            }
            memcpy(extensions[instance_extension_count + i], ext.extensionName, extension_name_length * sizeof(char));
        }
    }

    free((void*) ext_properties);

    *out_extension_count = total_extension_count;
    *out_extensions = extensions;

    return 1;

glad_vk_get_extensions_error:
    free((void*) ext_properties);
    if (extensions != NULL) {
        for (i = 0; i < total_extension_count; ++i) {
            free((void*) extensions[i]);
        }
        free(extensions);
    }
    return 0;
}

static void glad_vk_free_extensions(uint32_t extension_count, char **extensions) {
    uint32_t i;

    for(i = 0; i < extension_count ; ++i) {
        free((void*) (extensions[i]));
    }

    free((void*) extensions);
}

static int glad_vk_has_extension(const char *name, uint32_t extension_count, char **extensions) {
    uint32_t i;

    for (i = 0; i < extension_count; ++i) {
        if(extensions[i] != NULL && strcmp(name, extensions[i]) == 0) {
            return 1;
        }
    }

    return 0;
}

static GLADapiproc glad_vk_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_vk_find_extensions_vulkan(GladVulkanContext *context, VkPhysicalDevice physical_device) {
    uint32_t extension_count = 0;
    char **extensions = NULL;
    if (!glad_vk_get_extensions(context, physical_device, &extension_count, &extensions)) return 0;

    context->AMD_buffer_marker = glad_vk_has_extension("VK_AMD_buffer_marker", extension_count, extensions);
    context->AMD_draw_indirect_count = glad_vk_has_extension("VK_AMD_draw_indirect_count", extension_count, extensions);
    context->AMD_memory_overallocation_behavior = glad_vk_has_extension("VK_AMD_memory_overallocation_behavior", extension_count, extensions);
    context->AMD_shader_info = glad_vk_has_extension("VK_AMD_shader_info", extension_count, extensions);
    context->EXT_astc_decode_mode = glad_vk_has_extension("VK_EXT_astc_decode_mode", extension_count, extensions);
    context->EXT_attachment_feedback_loop_layout = glad_vk_has_extension("VK_EXT_attachment_feedback_loop_layout", extension_count, extensions);
    context->EXT_buffer_device_address = glad_vk_has_extension("VK_EXT_buffer_device_address", extension_count, extensions);
    context->EXT_calibrated_timestamps = glad_vk_has_extension("VK_EXT_calibrated_timestamps", extension_count, extensions);
    context->EXT_conditional_rendering = glad_vk_has_extension("VK_EXT_conditional_rendering", extension_count, extensions);
    context->EXT_conservative_rasterization = glad_vk_has_extension("VK_EXT_conservative_rasterization", extension_count, extensions);
    context->EXT_debug_utils = glad_vk_has_extension("VK_EXT_debug_utils", extension_count, extensions);
    context->EXT_depth_clamp_control = glad_vk_has_extension("VK_EXT_depth_clamp_control", extension_count, extensions);
    context->EXT_descriptor_buffer = glad_vk_has_extension("VK_EXT_descriptor_buffer", extension_count, extensions);
    context->EXT_descriptor_indexing = glad_vk_has_extension("VK_EXT_descriptor_indexing", extension_count, extensions);
    context->EXT_extended_dynamic_state = glad_vk_has_extension("VK_EXT_extended_dynamic_state", extension_count, extensions);
    context->EXT_extended_dynamic_state2 = glad_vk_has_extension("VK_EXT_extended_dynamic_state2", extension_count, extensions);
    context->EXT_extended_dynamic_state3 = glad_vk_has_extension("VK_EXT_extended_dynamic_state3", extension_count, extensions);
    context->EXT_fragment_shader_interlock = glad_vk_has_extension("VK_EXT_fragment_shader_interlock", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    context->EXT_full_screen_exclusive = glad_vk_has_extension("VK_EXT_full_screen_exclusive", extension_count, extensions);

#endif
    context->EXT_graphics_pipeline_library = glad_vk_has_extension("VK_EXT_graphics_pipeline_library", extension_count, extensions);
    context->EXT_hdr_metadata = glad_vk_has_extension("VK_EXT_hdr_metadata", extension_count, extensions);
    context->EXT_host_image_copy = glad_vk_has_extension("VK_EXT_host_image_copy", extension_count, extensions);
    context->EXT_host_query_reset = glad_vk_has_extension("VK_EXT_host_query_reset", extension_count, extensions);
    context->EXT_image_compression_control = glad_vk_has_extension("VK_EXT_image_compression_control", extension_count, extensions);
    context->EXT_image_view_min_lod = glad_vk_has_extension("VK_EXT_image_view_min_lod", extension_count, extensions);
    context->EXT_inline_uniform_block = glad_vk_has_extension("VK_EXT_inline_uniform_block", extension_count, extensions);
    context->EXT_line_rasterization = glad_vk_has_extension("VK_EXT_line_rasterization", extension_count, extensions);
    context->EXT_memory_budget = glad_vk_has_extension("VK_EXT_memory_budget", extension_count, extensions);
    context->EXT_memory_priority = glad_vk_has_extension("VK_EXT_memory_priority", extension_count, extensions);
    context->EXT_mesh_shader = glad_vk_has_extension("VK_EXT_mesh_shader", extension_count, extensions);
    context->EXT_multisampled_render_to_single_sampled = glad_vk_has_extension("VK_EXT_multisampled_render_to_single_sampled", extension_count, extensions);
    context->EXT_mutable_descriptor_type = glad_vk_has_extension("VK_EXT_mutable_descriptor_type", extension_count, extensions);
    context->EXT_non_seamless_cube_map = glad_vk_has_extension("VK_EXT_non_seamless_cube_map", extension_count, extensions);
    context->EXT_pageable_device_local_memory = glad_vk_has_extension("VK_EXT_pageable_device_local_memory", extension_count, extensions);
    context->EXT_private_data = glad_vk_has_extension("VK_EXT_private_data", extension_count, extensions);
    context->EXT_rasterization_order_attachment_access = glad_vk_has_extension("VK_EXT_rasterization_order_attachment_access", extension_count, extensions);
    context->EXT_sample_locations = glad_vk_has_extension("VK_EXT_sample_locations", extension_count, extensions);
    context->EXT_shader_module_identifier = glad_vk_has_extension("VK_EXT_shader_module_identifier", extension_count, extensions);
    context->EXT_shader_object = glad_vk_has_extension("VK_EXT_shader_object", extension_count, extensions);
    context->EXT_shader_subgroup_ballot = glad_vk_has_extension("VK_EXT_shader_subgroup_ballot", extension_count, extensions);
    context->EXT_shader_subgroup_vote = glad_vk_has_extension("VK_EXT_shader_subgroup_vote", extension_count, extensions);
    context->EXT_swapchain_colorspace = glad_vk_has_extension("VK_EXT_swapchain_colorspace", extension_count, extensions);
    context->EXT_texture_compression_astc_hdr = glad_vk_has_extension("VK_EXT_texture_compression_astc_hdr", extension_count, extensions);
    context->EXT_tooling_info = glad_vk_has_extension("VK_EXT_tooling_info", extension_count, extensions);
    context->EXT_transform_feedback = glad_vk_has_extension("VK_EXT_transform_feedback", extension_count, extensions);
    context->EXT_validation_features = glad_vk_has_extension("VK_EXT_validation_features", extension_count, extensions);
    context->EXT_vertex_input_dynamic_state = glad_vk_has_extension("VK_EXT_vertex_input_dynamic_state", extension_count, extensions);
    context->EXT_ycbcr_2plane_444_formats = glad_vk_has_extension("VK_EXT_ycbcr_2plane_444_formats", extension_count, extensions);
    context->IMG_format_pvrtc = glad_vk_has_extension("VK_IMG_format_pvrtc", extension_count, extensions);
    context->INTEL_performance_query = glad_vk_has_extension("VK_INTEL_performance_query", extension_count, extensions);
    context->KHR_16bit_storage = glad_vk_has_extension("VK_KHR_16bit_storage", extension_count, extensions);
    context->KHR_8bit_storage = glad_vk_has_extension("VK_KHR_8bit_storage", extension_count, extensions);
    context->KHR_acceleration_structure = glad_vk_has_extension("VK_KHR_acceleration_structure", extension_count, extensions);
    context->KHR_bind_memory2 = glad_vk_has_extension("VK_KHR_bind_memory2", extension_count, extensions);
    context->KHR_buffer_device_address = glad_vk_has_extension("VK_KHR_buffer_device_address", extension_count, extensions);
    context->KHR_copy_commands2 = glad_vk_has_extension("VK_KHR_copy_commands2", extension_count, extensions);
    context->KHR_create_renderpass2 = glad_vk_has_extension("VK_KHR_create_renderpass2", extension_count, extensions);
    context->KHR_dedicated_allocation = glad_vk_has_extension("VK_KHR_dedicated_allocation", extension_count, extensions);
    context->KHR_depth_stencil_resolve = glad_vk_has_extension("VK_KHR_depth_stencil_resolve", extension_count, extensions);
    context->KHR_descriptor_update_template = glad_vk_has_extension("VK_KHR_descriptor_update_template", extension_count, extensions);
    context->KHR_device_group = glad_vk_has_extension("VK_KHR_device_group", extension_count, extensions);
    context->KHR_device_group_creation = glad_vk_has_extension("VK_KHR_device_group_creation", extension_count, extensions);
    context->KHR_draw_indirect_count = glad_vk_has_extension("VK_KHR_draw_indirect_count", extension_count, extensions);
    context->KHR_dynamic_rendering = glad_vk_has_extension("VK_KHR_dynamic_rendering", extension_count, extensions);
    context->KHR_dynamic_rendering_local_read = glad_vk_has_extension("VK_KHR_dynamic_rendering_local_read", extension_count, extensions);
    context->KHR_external_fence = glad_vk_has_extension("VK_KHR_external_fence", extension_count, extensions);
    context->KHR_external_fence_capabilities = glad_vk_has_extension("VK_KHR_external_fence_capabilities", extension_count, extensions);
    context->KHR_external_memory = glad_vk_has_extension("VK_KHR_external_memory", extension_count, extensions);
    context->KHR_external_memory_capabilities = glad_vk_has_extension("VK_KHR_external_memory_capabilities", extension_count, extensions);
    context->KHR_external_semaphore = glad_vk_has_extension("VK_KHR_external_semaphore", extension_count, extensions);
    context->KHR_external_semaphore_capabilities = glad_vk_has_extension("VK_KHR_external_semaphore_capabilities", extension_count, extensions);
    context->KHR_format_feature_flags2 = glad_vk_has_extension("VK_KHR_format_feature_flags2", extension_count, extensions);
    context->KHR_get_memory_requirements2 = glad_vk_has_extension("VK_KHR_get_memory_requirements2", extension_count, extensions);
    context->KHR_get_physical_device_properties2 = glad_vk_has_extension("VK_KHR_get_physical_device_properties2", extension_count, extensions);
    context->KHR_line_rasterization = glad_vk_has_extension("VK_KHR_line_rasterization", extension_count, extensions);
    context->KHR_maintenance1 = glad_vk_has_extension("VK_KHR_maintenance1", extension_count, extensions);
    context->KHR_maintenance3 = glad_vk_has_extension("VK_KHR_maintenance3", extension_count, extensions);
    context->KHR_maintenance4 = glad_vk_has_extension("VK_KHR_maintenance4", extension_count, extensions);
    context->KHR_maintenance5 = glad_vk_has_extension("VK_KHR_maintenance5", extension_count, extensions);
    context->KHR_maintenance6 = glad_vk_has_extension("VK_KHR_maintenance6", extension_count, extensions);
    context->KHR_map_memory2 = glad_vk_has_extension("VK_KHR_map_memory2", extension_count, extensions);
    context->KHR_multiview = glad_vk_has_extension("VK_KHR_multiview", extension_count, extensions);
    context->KHR_performance_query = glad_vk_has_extension("VK_KHR_performance_query", extension_count, extensions);
    context->KHR_pipeline_library = glad_vk_has_extension("VK_KHR_pipeline_library", extension_count, extensions);
    context->KHR_present_id = glad_vk_has_extension("VK_KHR_present_id", extension_count, extensions);
    context->KHR_present_wait = glad_vk_has_extension("VK_KHR_present_wait", extension_count, extensions);
    context->KHR_push_descriptor = glad_vk_has_extension("VK_KHR_push_descriptor", extension_count, extensions);
    context->KHR_ray_query = glad_vk_has_extension("VK_KHR_ray_query", extension_count, extensions);
    context->KHR_ray_tracing_maintenance1 = glad_vk_has_extension("VK_KHR_ray_tracing_maintenance1", extension_count, extensions);
    context->KHR_ray_tracing_pipeline = glad_vk_has_extension("VK_KHR_ray_tracing_pipeline", extension_count, extensions);
    context->KHR_ray_tracing_position_fetch = glad_vk_has_extension("VK_KHR_ray_tracing_position_fetch", extension_count, extensions);
    context->KHR_sampler_mirror_clamp_to_edge = glad_vk_has_extension("VK_KHR_sampler_mirror_clamp_to_edge", extension_count, extensions);
    context->KHR_sampler_ycbcr_conversion = glad_vk_has_extension("VK_KHR_sampler_ycbcr_conversion", extension_count, extensions);
    context->KHR_shader_atomic_int64 = glad_vk_has_extension("VK_KHR_shader_atomic_int64", extension_count, extensions);
    context->KHR_shader_clock = glad_vk_has_extension("VK_KHR_shader_clock", extension_count, extensions);
    context->KHR_shader_draw_parameters = glad_vk_has_extension("VK_KHR_shader_draw_parameters", extension_count, extensions);
    context->KHR_shader_float16_int8 = glad_vk_has_extension("VK_KHR_shader_float16_int8", extension_count, extensions);
    context->KHR_shader_non_semantic_info = glad_vk_has_extension("VK_KHR_shader_non_semantic_info", extension_count, extensions);
    context->KHR_shader_subgroup_extended_types = glad_vk_has_extension("VK_KHR_shader_subgroup_extended_types", extension_count, extensions);
    context->KHR_surface = glad_vk_has_extension("VK_KHR_surface", extension_count, extensions);
    context->KHR_swapchain = glad_vk_has_extension("VK_KHR_swapchain", extension_count, extensions);
    context->KHR_synchronization2 = glad_vk_has_extension("VK_KHR_synchronization2", extension_count, extensions);
    context->KHR_timeline_semaphore = glad_vk_has_extension("VK_KHR_timeline_semaphore", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    context->KHR_wayland_surface = glad_vk_has_extension("VK_KHR_wayland_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    context->KHR_win32_keyed_mutex = glad_vk_has_extension("VK_KHR_win32_keyed_mutex", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    context->KHR_win32_surface = glad_vk_has_extension("VK_KHR_win32_surface", extension_count, extensions);

#endif
    context->KHR_workgroup_memory_explicit_layout = glad_vk_has_extension("VK_KHR_workgroup_memory_explicit_layout", extension_count, extensions);
#if defined(VK_USE_PLATFORM_XCB_KHR)
    context->KHR_xcb_surface = glad_vk_has_extension("VK_KHR_xcb_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    context->KHR_xlib_surface = glad_vk_has_extension("VK_KHR_xlib_surface", extension_count, extensions);

#endif
    context->NV_device_diagnostic_checkpoints = glad_vk_has_extension("VK_NV_device_diagnostic_checkpoints", extension_count, extensions);
    context->NV_device_diagnostics_config = glad_vk_has_extension("VK_NV_device_diagnostics_config", extension_count, extensions);
    context->NV_mesh_shader = glad_vk_has_extension("VK_NV_mesh_shader", extension_count, extensions);
    context->NV_ray_tracing = glad_vk_has_extension("VK_NV_ray_tracing", extension_count, extensions);
    context->NV_representative_fragment_test = glad_vk_has_extension("VK_NV_representative_fragment_test", extension_count, extensions);

    GLAD_UNUSED(&glad_vk_has_extension);

    glad_vk_free_extensions(extension_count, extensions);

    return 1;
}

static int glad_vk_find_core_vulkan(GladVulkanContext *context, VkPhysicalDevice physical_device) {
    int major = 1;
    int minor = 0;

#ifdef VK_VERSION_1_1
    if (context->EnumerateInstanceVersion != NULL) {
        uint32_t version;
        VkResult result;

        result = context->EnumerateInstanceVersion(&version);
        if (result == VK_SUCCESS) {
            major = (int) VK_VERSION_MAJOR(version);
            minor = (int) VK_VERSION_MINOR(version);
        }
    }
#endif

    if (physical_device != NULL && context->GetPhysicalDeviceProperties != NULL) {
        VkPhysicalDeviceProperties properties;
        context->GetPhysicalDeviceProperties(physical_device, &properties);

        major = (int) VK_VERSION_MAJOR(properties.apiVersion);
        minor = (int) VK_VERSION_MINOR(properties.apiVersion);
    }

    context->VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    context->VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    context->VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    context->VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    context->VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadVulkanContextUserPtr(GladVulkanContext *context, VkPhysicalDevice physical_device, GLADuserptrloadfunc load, void *userptr) {
    int version;

#ifdef VK_VERSION_1_1
    context->EnumerateInstanceVersion  = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
#endif
    version = glad_vk_find_core_vulkan(context, physical_device);
    if (!version) {
        return 0;
    }

    glad_vk_load_VK_VERSION_1_0(context, load, userptr);
    glad_vk_load_VK_VERSION_1_1(context, load, userptr);
    glad_vk_load_VK_VERSION_1_2(context, load, userptr);
    glad_vk_load_VK_VERSION_1_3(context, load, userptr);
    glad_vk_load_VK_VERSION_1_4(context, load, userptr);

    if (!glad_vk_find_extensions_vulkan(context, physical_device)) return 0;
    glad_vk_load_VK_AMD_buffer_marker(context, load, userptr);
    glad_vk_load_VK_AMD_draw_indirect_count(context, load, userptr);
    glad_vk_load_VK_AMD_shader_info(context, load, userptr);
    glad_vk_load_VK_EXT_buffer_device_address(context, load, userptr);
    glad_vk_load_VK_EXT_calibrated_timestamps(context, load, userptr);
    glad_vk_load_VK_EXT_conditional_rendering(context, load, userptr);
    glad_vk_load_VK_EXT_debug_utils(context, load, userptr);
    glad_vk_load_VK_EXT_depth_clamp_control(context, load, userptr);
    glad_vk_load_VK_EXT_descriptor_buffer(context, load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state(context, load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state2(context, load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state3(context, load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_EXT_full_screen_exclusive(context, load, userptr);

#endif
    glad_vk_load_VK_EXT_hdr_metadata(context, load, userptr);
    glad_vk_load_VK_EXT_host_image_copy(context, load, userptr);
    glad_vk_load_VK_EXT_host_query_reset(context, load, userptr);
    glad_vk_load_VK_EXT_image_compression_control(context, load, userptr);
    glad_vk_load_VK_EXT_line_rasterization(context, load, userptr);
    glad_vk_load_VK_EXT_mesh_shader(context, load, userptr);
    glad_vk_load_VK_EXT_pageable_device_local_memory(context, load, userptr);
    glad_vk_load_VK_EXT_private_data(context, load, userptr);
    glad_vk_load_VK_EXT_sample_locations(context, load, userptr);
    glad_vk_load_VK_EXT_shader_module_identifier(context, load, userptr);
    glad_vk_load_VK_EXT_shader_object(context, load, userptr);
    glad_vk_load_VK_EXT_tooling_info(context, load, userptr);
    glad_vk_load_VK_EXT_transform_feedback(context, load, userptr);
    glad_vk_load_VK_EXT_vertex_input_dynamic_state(context, load, userptr);
    glad_vk_load_VK_INTEL_performance_query(context, load, userptr);
    glad_vk_load_VK_KHR_acceleration_structure(context, load, userptr);
    glad_vk_load_VK_KHR_bind_memory2(context, load, userptr);
    glad_vk_load_VK_KHR_buffer_device_address(context, load, userptr);
    glad_vk_load_VK_KHR_copy_commands2(context, load, userptr);
    glad_vk_load_VK_KHR_create_renderpass2(context, load, userptr);
    glad_vk_load_VK_KHR_descriptor_update_template(context, load, userptr);
    glad_vk_load_VK_KHR_device_group(context, load, userptr);
    glad_vk_load_VK_KHR_device_group_creation(context, load, userptr);
    glad_vk_load_VK_KHR_draw_indirect_count(context, load, userptr);
    glad_vk_load_VK_KHR_dynamic_rendering(context, load, userptr);
    glad_vk_load_VK_KHR_dynamic_rendering_local_read(context, load, userptr);
    glad_vk_load_VK_KHR_external_fence_capabilities(context, load, userptr);
    glad_vk_load_VK_KHR_external_memory_capabilities(context, load, userptr);
    glad_vk_load_VK_KHR_external_semaphore_capabilities(context, load, userptr);
    glad_vk_load_VK_KHR_get_memory_requirements2(context, load, userptr);
    glad_vk_load_VK_KHR_get_physical_device_properties2(context, load, userptr);
    glad_vk_load_VK_KHR_line_rasterization(context, load, userptr);
    glad_vk_load_VK_KHR_maintenance1(context, load, userptr);
    glad_vk_load_VK_KHR_maintenance3(context, load, userptr);
    glad_vk_load_VK_KHR_maintenance4(context, load, userptr);
    glad_vk_load_VK_KHR_maintenance5(context, load, userptr);
    glad_vk_load_VK_KHR_maintenance6(context, load, userptr);
    glad_vk_load_VK_KHR_map_memory2(context, load, userptr);
    glad_vk_load_VK_KHR_performance_query(context, load, userptr);
    glad_vk_load_VK_KHR_present_wait(context, load, userptr);
    glad_vk_load_VK_KHR_push_descriptor(context, load, userptr);
    glad_vk_load_VK_KHR_ray_tracing_maintenance1(context, load, userptr);
    glad_vk_load_VK_KHR_ray_tracing_pipeline(context, load, userptr);
    glad_vk_load_VK_KHR_sampler_ycbcr_conversion(context, load, userptr);
    glad_vk_load_VK_KHR_surface(context, load, userptr);
    glad_vk_load_VK_KHR_swapchain(context, load, userptr);
    glad_vk_load_VK_KHR_synchronization2(context, load, userptr);
    glad_vk_load_VK_KHR_timeline_semaphore(context, load, userptr);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_vk_load_VK_KHR_wayland_surface(context, load, userptr);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_win32_surface(context, load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_vk_load_VK_KHR_xcb_surface(context, load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_vk_load_VK_KHR_xlib_surface(context, load, userptr);

#endif
    glad_vk_load_VK_NV_device_diagnostic_checkpoints(context, load, userptr);
    glad_vk_load_VK_NV_mesh_shader(context, load, userptr);
    glad_vk_load_VK_NV_ray_tracing(context, load, userptr);

    glad_vk_resolve_aliases(context);

    return version;
}


int gladLoadVulkanContext(GladVulkanContext *context, VkPhysicalDevice physical_device, GLADloadfunc load) {
    return gladLoadVulkanContextUserPtr(context, physical_device, glad_vk_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 

#ifdef GLAD_VULKAN

#ifndef GLAD_LOADER_LIBRARY_C_
#define GLAD_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLAD_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif


static void* glad_get_dlopen_handle(const char *lib_names[], int length) {
    void *handle = NULL;
    int i;

    for (i = 0; i < length; ++i) {
#if GLAD_PLATFORM_WIN32
  #if GLAD_PLATFORM_UWP
        size_t buffer_size = (strlen(lib_names[i]) + 1) * sizeof(WCHAR);
        LPWSTR buffer = (LPWSTR) malloc(buffer_size);
        if (buffer != NULL) {
            int ret = MultiByteToWideChar(CP_ACP, 0, lib_names[i], -1, buffer, buffer_size);
            if (ret != 0) {
                handle = (void*) LoadPackagedLibrary(buffer, 0);
            }
            free((void*) buffer);
        }
  #else
        handle = (void*) LoadLibraryA(lib_names[i]);
  #endif
#else
        handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != NULL) {
            return handle;
        }
    }

    return NULL;
}

static void glad_close_dlopen_handle(void* handle) {
    if (handle != NULL) {
#if GLAD_PLATFORM_WIN32
        FreeLibrary((HMODULE) handle);
#else
        dlclose(handle);
#endif
    }
}

static GLADapiproc glad_dlsym_handle(void* handle, const char *name) {
    if (handle == NULL) {
        return NULL;
    }

#if GLAD_PLATFORM_WIN32
    return (GLADapiproc) GetProcAddress((HMODULE) handle, name);
#else
    return GLAD_GNUC_EXTENSION (GLADapiproc) dlsym(handle, name);
#endif
}

#endif /* GLAD_LOADER_LIBRARY_C_ */


static const char* DEVICE_FUNCTIONS[] = {
    "vkAcquireFullScreenExclusiveModeEXT",
    "vkAcquireNextImage2KHR",
    "vkAcquireNextImageKHR",
    "vkAcquirePerformanceConfigurationINTEL",
    "vkAcquireProfilingLockKHR",
    "vkAllocateCommandBuffers",
    "vkAllocateDescriptorSets",
    "vkAllocateMemory",
    "vkBeginCommandBuffer",
    "vkBindAccelerationStructureMemoryNV",
    "vkBindBufferMemory",
    "vkBindBufferMemory2",
    "vkBindBufferMemory2KHR",
    "vkBindImageMemory",
    "vkBindImageMemory2",
    "vkBindImageMemory2KHR",
    "vkBuildAccelerationStructuresKHR",
    "vkCmdBeginConditionalRenderingEXT",
    "vkCmdBeginDebugUtilsLabelEXT",
    "vkCmdBeginQuery",
    "vkCmdBeginQueryIndexedEXT",
    "vkCmdBeginRenderPass",
    "vkCmdBeginRenderPass2",
    "vkCmdBeginRenderPass2KHR",
    "vkCmdBeginRendering",
    "vkCmdBeginRenderingKHR",
    "vkCmdBeginTransformFeedbackEXT",
    "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT",
    "vkCmdBindDescriptorBufferEmbeddedSamplersEXT",
    "vkCmdBindDescriptorBuffersEXT",
    "vkCmdBindDescriptorSets",
    "vkCmdBindDescriptorSets2",
    "vkCmdBindDescriptorSets2KHR",
    "vkCmdBindIndexBuffer",
    "vkCmdBindIndexBuffer2",
    "vkCmdBindIndexBuffer2KHR",
    "vkCmdBindPipeline",
    "vkCmdBindShadersEXT",
    "vkCmdBindTransformFeedbackBuffersEXT",
    "vkCmdBindVertexBuffers",
    "vkCmdBindVertexBuffers2",
    "vkCmdBindVertexBuffers2EXT",
    "vkCmdBlitImage",
    "vkCmdBlitImage2",
    "vkCmdBlitImage2KHR",
    "vkCmdBuildAccelerationStructureNV",
    "vkCmdBuildAccelerationStructuresIndirectKHR",
    "vkCmdBuildAccelerationStructuresKHR",
    "vkCmdClearAttachments",
    "vkCmdClearColorImage",
    "vkCmdClearDepthStencilImage",
    "vkCmdCopyAccelerationStructureKHR",
    "vkCmdCopyAccelerationStructureNV",
    "vkCmdCopyAccelerationStructureToMemoryKHR",
    "vkCmdCopyBuffer",
    "vkCmdCopyBuffer2",
    "vkCmdCopyBuffer2KHR",
    "vkCmdCopyBufferToImage",
    "vkCmdCopyBufferToImage2",
    "vkCmdCopyBufferToImage2KHR",
    "vkCmdCopyImage",
    "vkCmdCopyImage2",
    "vkCmdCopyImage2KHR",
    "vkCmdCopyImageToBuffer",
    "vkCmdCopyImageToBuffer2",
    "vkCmdCopyImageToBuffer2KHR",
    "vkCmdCopyMemoryToAccelerationStructureKHR",
    "vkCmdCopyQueryPoolResults",
    "vkCmdDispatch",
    "vkCmdDispatchBase",
    "vkCmdDispatchBaseKHR",
    "vkCmdDispatchIndirect",
    "vkCmdDraw",
    "vkCmdDrawIndexed",
    "vkCmdDrawIndexedIndirect",
    "vkCmdDrawIndexedIndirectCount",
    "vkCmdDrawIndexedIndirectCountAMD",
    "vkCmdDrawIndexedIndirectCountKHR",
    "vkCmdDrawIndirect",
    "vkCmdDrawIndirectByteCountEXT",
    "vkCmdDrawIndirectCount",
    "vkCmdDrawIndirectCountAMD",
    "vkCmdDrawIndirectCountKHR",
    "vkCmdDrawMeshTasksEXT",
    "vkCmdDrawMeshTasksIndirectCountEXT",
    "vkCmdDrawMeshTasksIndirectCountNV",
    "vkCmdDrawMeshTasksIndirectEXT",
    "vkCmdDrawMeshTasksIndirectNV",
    "vkCmdDrawMeshTasksNV",
    "vkCmdEndConditionalRenderingEXT",
    "vkCmdEndDebugUtilsLabelEXT",
    "vkCmdEndQuery",
    "vkCmdEndQueryIndexedEXT",
    "vkCmdEndRenderPass",
    "vkCmdEndRenderPass2",
    "vkCmdEndRenderPass2KHR",
    "vkCmdEndRendering",
    "vkCmdEndRenderingKHR",
    "vkCmdEndTransformFeedbackEXT",
    "vkCmdExecuteCommands",
    "vkCmdFillBuffer",
    "vkCmdInsertDebugUtilsLabelEXT",
    "vkCmdNextSubpass",
    "vkCmdNextSubpass2",
    "vkCmdNextSubpass2KHR",
    "vkCmdPipelineBarrier",
    "vkCmdPipelineBarrier2",
    "vkCmdPipelineBarrier2KHR",
    "vkCmdPushConstants",
    "vkCmdPushConstants2",
    "vkCmdPushConstants2KHR",
    "vkCmdPushDescriptorSet",
    "vkCmdPushDescriptorSet2",
    "vkCmdPushDescriptorSet2KHR",
    "vkCmdPushDescriptorSetKHR",
    "vkCmdPushDescriptorSetWithTemplate",
    "vkCmdPushDescriptorSetWithTemplate2",
    "vkCmdPushDescriptorSetWithTemplate2KHR",
    "vkCmdPushDescriptorSetWithTemplateKHR",
    "vkCmdResetEvent",
    "vkCmdResetEvent2",
    "vkCmdResetEvent2KHR",
    "vkCmdResetQueryPool",
    "vkCmdResolveImage",
    "vkCmdResolveImage2",
    "vkCmdResolveImage2KHR",
    "vkCmdSetAlphaToCoverageEnableEXT",
    "vkCmdSetAlphaToOneEnableEXT",
    "vkCmdSetBlendConstants",
    "vkCmdSetCheckpointNV",
    "vkCmdSetColorBlendAdvancedEXT",
    "vkCmdSetColorBlendEnableEXT",
    "vkCmdSetColorBlendEquationEXT",
    "vkCmdSetColorWriteMaskEXT",
    "vkCmdSetConservativeRasterizationModeEXT",
    "vkCmdSetCoverageModulationModeNV",
    "vkCmdSetCoverageModulationTableEnableNV",
    "vkCmdSetCoverageModulationTableNV",
    "vkCmdSetCoverageReductionModeNV",
    "vkCmdSetCoverageToColorEnableNV",
    "vkCmdSetCoverageToColorLocationNV",
    "vkCmdSetCullMode",
    "vkCmdSetCullModeEXT",
    "vkCmdSetDepthBias",
    "vkCmdSetDepthBiasEnable",
    "vkCmdSetDepthBiasEnableEXT",
    "vkCmdSetDepthBounds",
    "vkCmdSetDepthBoundsTestEnable",
    "vkCmdSetDepthBoundsTestEnableEXT",
    "vkCmdSetDepthClampEnableEXT",
    "vkCmdSetDepthClampRangeEXT",
    "vkCmdSetDepthClipEnableEXT",
    "vkCmdSetDepthClipNegativeOneToOneEXT",
    "vkCmdSetDepthCompareOp",
    "vkCmdSetDepthCompareOpEXT",
    "vkCmdSetDepthTestEnable",
    "vkCmdSetDepthTestEnableEXT",
    "vkCmdSetDepthWriteEnable",
    "vkCmdSetDepthWriteEnableEXT",
    "vkCmdSetDescriptorBufferOffsets2EXT",
    "vkCmdSetDescriptorBufferOffsetsEXT",
    "vkCmdSetDeviceMask",
    "vkCmdSetDeviceMaskKHR",
    "vkCmdSetEvent",
    "vkCmdSetEvent2",
    "vkCmdSetEvent2KHR",
    "vkCmdSetExtraPrimitiveOverestimationSizeEXT",
    "vkCmdSetFrontFace",
    "vkCmdSetFrontFaceEXT",
    "vkCmdSetLineRasterizationModeEXT",
    "vkCmdSetLineStipple",
    "vkCmdSetLineStippleEXT",
    "vkCmdSetLineStippleEnableEXT",
    "vkCmdSetLineStippleKHR",
    "vkCmdSetLineWidth",
    "vkCmdSetLogicOpEXT",
    "vkCmdSetLogicOpEnableEXT",
    "vkCmdSetPatchControlPointsEXT",
    "vkCmdSetPerformanceMarkerINTEL",
    "vkCmdSetPerformanceOverrideINTEL",
    "vkCmdSetPerformanceStreamMarkerINTEL",
    "vkCmdSetPolygonModeEXT",
    "vkCmdSetPrimitiveRestartEnable",
    "vkCmdSetPrimitiveRestartEnableEXT",
    "vkCmdSetPrimitiveTopology",
    "vkCmdSetPrimitiveTopologyEXT",
    "vkCmdSetProvokingVertexModeEXT",
    "vkCmdSetRasterizationSamplesEXT",
    "vkCmdSetRasterizationStreamEXT",
    "vkCmdSetRasterizerDiscardEnable",
    "vkCmdSetRasterizerDiscardEnableEXT",
    "vkCmdSetRayTracingPipelineStackSizeKHR",
    "vkCmdSetRenderingAttachmentLocations",
    "vkCmdSetRenderingAttachmentLocationsKHR",
    "vkCmdSetRenderingInputAttachmentIndices",
    "vkCmdSetRenderingInputAttachmentIndicesKHR",
    "vkCmdSetRepresentativeFragmentTestEnableNV",
    "vkCmdSetSampleLocationsEXT",
    "vkCmdSetSampleLocationsEnableEXT",
    "vkCmdSetSampleMaskEXT",
    "vkCmdSetScissor",
    "vkCmdSetScissorWithCount",
    "vkCmdSetScissorWithCountEXT",
    "vkCmdSetShadingRateImageEnableNV",
    "vkCmdSetStencilCompareMask",
    "vkCmdSetStencilOp",
    "vkCmdSetStencilOpEXT",
    "vkCmdSetStencilReference",
    "vkCmdSetStencilTestEnable",
    "vkCmdSetStencilTestEnableEXT",
    "vkCmdSetStencilWriteMask",
    "vkCmdSetTessellationDomainOriginEXT",
    "vkCmdSetVertexInputEXT",
    "vkCmdSetViewport",
    "vkCmdSetViewportSwizzleNV",
    "vkCmdSetViewportWScalingEnableNV",
    "vkCmdSetViewportWithCount",
    "vkCmdSetViewportWithCountEXT",
    "vkCmdTraceRaysIndirect2KHR",
    "vkCmdTraceRaysIndirectKHR",
    "vkCmdTraceRaysKHR",
    "vkCmdTraceRaysNV",
    "vkCmdUpdateBuffer",
    "vkCmdWaitEvents",
    "vkCmdWaitEvents2",
    "vkCmdWaitEvents2KHR",
    "vkCmdWriteAccelerationStructuresPropertiesKHR",
    "vkCmdWriteAccelerationStructuresPropertiesNV",
    "vkCmdWriteBufferMarker2AMD",
    "vkCmdWriteBufferMarkerAMD",
    "vkCmdWriteTimestamp",
    "vkCmdWriteTimestamp2",
    "vkCmdWriteTimestamp2KHR",
    "vkCompileDeferredNV",
    "vkCopyAccelerationStructureKHR",
    "vkCopyAccelerationStructureToMemoryKHR",
    "vkCopyImageToImage",
    "vkCopyImageToImageEXT",
    "vkCopyImageToMemory",
    "vkCopyImageToMemoryEXT",
    "vkCopyMemoryToAccelerationStructureKHR",
    "vkCopyMemoryToImage",
    "vkCopyMemoryToImageEXT",
    "vkCreateAccelerationStructureKHR",
    "vkCreateAccelerationStructureNV",
    "vkCreateBuffer",
    "vkCreateBufferView",
    "vkCreateCommandPool",
    "vkCreateComputePipelines",
    "vkCreateDescriptorPool",
    "vkCreateDescriptorSetLayout",
    "vkCreateDescriptorUpdateTemplate",
    "vkCreateDescriptorUpdateTemplateKHR",
    "vkCreateEvent",
    "vkCreateFence",
    "vkCreateFramebuffer",
    "vkCreateGraphicsPipelines",
    "vkCreateImage",
    "vkCreateImageView",
    "vkCreatePipelineCache",
    "vkCreatePipelineLayout",
    "vkCreatePrivateDataSlot",
    "vkCreatePrivateDataSlotEXT",
    "vkCreateQueryPool",
    "vkCreateRayTracingPipelinesKHR",
    "vkCreateRayTracingPipelinesNV",
    "vkCreateRenderPass",
    "vkCreateRenderPass2",
    "vkCreateRenderPass2KHR",
    "vkCreateSampler",
    "vkCreateSamplerYcbcrConversion",
    "vkCreateSamplerYcbcrConversionKHR",
    "vkCreateSemaphore",
    "vkCreateShaderModule",
    "vkCreateShadersEXT",
    "vkCreateSwapchainKHR",
    "vkDestroyAccelerationStructureKHR",
    "vkDestroyAccelerationStructureNV",
    "vkDestroyBuffer",
    "vkDestroyBufferView",
    "vkDestroyCommandPool",
    "vkDestroyDescriptorPool",
    "vkDestroyDescriptorSetLayout",
    "vkDestroyDescriptorUpdateTemplate",
    "vkDestroyDescriptorUpdateTemplateKHR",
    "vkDestroyDevice",
    "vkDestroyEvent",
    "vkDestroyFence",
    "vkDestroyFramebuffer",
    "vkDestroyImage",
    "vkDestroyImageView",
    "vkDestroyPipeline",
    "vkDestroyPipelineCache",
    "vkDestroyPipelineLayout",
    "vkDestroyPrivateDataSlot",
    "vkDestroyPrivateDataSlotEXT",
    "vkDestroyQueryPool",
    "vkDestroyRenderPass",
    "vkDestroySampler",
    "vkDestroySamplerYcbcrConversion",
    "vkDestroySamplerYcbcrConversionKHR",
    "vkDestroySemaphore",
    "vkDestroyShaderEXT",
    "vkDestroyShaderModule",
    "vkDestroySwapchainKHR",
    "vkDeviceWaitIdle",
    "vkEndCommandBuffer",
    "vkFlushMappedMemoryRanges",
    "vkFreeCommandBuffers",
    "vkFreeDescriptorSets",
    "vkFreeMemory",
    "vkGetAccelerationStructureBuildSizesKHR",
    "vkGetAccelerationStructureDeviceAddressKHR",
    "vkGetAccelerationStructureHandleNV",
    "vkGetAccelerationStructureMemoryRequirementsNV",
    "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT",
    "vkGetBufferDeviceAddress",
    "vkGetBufferDeviceAddressEXT",
    "vkGetBufferDeviceAddressKHR",
    "vkGetBufferMemoryRequirements",
    "vkGetBufferMemoryRequirements2",
    "vkGetBufferMemoryRequirements2KHR",
    "vkGetBufferOpaqueCaptureAddress",
    "vkGetBufferOpaqueCaptureAddressKHR",
    "vkGetBufferOpaqueCaptureDescriptorDataEXT",
    "vkGetCalibratedTimestampsEXT",
    "vkGetDescriptorEXT",
    "vkGetDescriptorSetLayoutBindingOffsetEXT",
    "vkGetDescriptorSetLayoutSizeEXT",
    "vkGetDescriptorSetLayoutSupport",
    "vkGetDescriptorSetLayoutSupportKHR",
    "vkGetDeviceAccelerationStructureCompatibilityKHR",
    "vkGetDeviceBufferMemoryRequirements",
    "vkGetDeviceBufferMemoryRequirementsKHR",
    "vkGetDeviceGroupPeerMemoryFeatures",
    "vkGetDeviceGroupPeerMemoryFeaturesKHR",
    "vkGetDeviceGroupPresentCapabilitiesKHR",
    "vkGetDeviceGroupSurfacePresentModes2EXT",
    "vkGetDeviceGroupSurfacePresentModesKHR",
    "vkGetDeviceImageMemoryRequirements",
    "vkGetDeviceImageMemoryRequirementsKHR",
    "vkGetDeviceImageSparseMemoryRequirements",
    "vkGetDeviceImageSparseMemoryRequirementsKHR",
    "vkGetDeviceImageSubresourceLayout",
    "vkGetDeviceImageSubresourceLayoutKHR",
    "vkGetDeviceMemoryCommitment",
    "vkGetDeviceMemoryOpaqueCaptureAddress",
    "vkGetDeviceMemoryOpaqueCaptureAddressKHR",
    "vkGetDeviceProcAddr",
    "vkGetDeviceQueue",
    "vkGetDeviceQueue2",
    "vkGetEventStatus",
    "vkGetFenceStatus",
    "vkGetImageMemoryRequirements",
    "vkGetImageMemoryRequirements2",
    "vkGetImageMemoryRequirements2KHR",
    "vkGetImageOpaqueCaptureDescriptorDataEXT",
    "vkGetImageSparseMemoryRequirements",
    "vkGetImageSparseMemoryRequirements2",
    "vkGetImageSparseMemoryRequirements2KHR",
    "vkGetImageSubresourceLayout",
    "vkGetImageSubresourceLayout2",
    "vkGetImageSubresourceLayout2EXT",
    "vkGetImageSubresourceLayout2KHR",
    "vkGetImageViewOpaqueCaptureDescriptorDataEXT",
    "vkGetPerformanceParameterINTEL",
    "vkGetPipelineCacheData",
    "vkGetPrivateData",
    "vkGetPrivateDataEXT",
    "vkGetQueryPoolResults",
    "vkGetQueueCheckpointData2NV",
    "vkGetQueueCheckpointDataNV",
    "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR",
    "vkGetRayTracingShaderGroupHandlesKHR",
    "vkGetRayTracingShaderGroupHandlesNV",
    "vkGetRayTracingShaderGroupStackSizeKHR",
    "vkGetRenderAreaGranularity",
    "vkGetRenderingAreaGranularity",
    "vkGetRenderingAreaGranularityKHR",
    "vkGetSamplerOpaqueCaptureDescriptorDataEXT",
    "vkGetSemaphoreCounterValue",
    "vkGetSemaphoreCounterValueKHR",
    "vkGetShaderBinaryDataEXT",
    "vkGetShaderInfoAMD",
    "vkGetShaderModuleCreateInfoIdentifierEXT",
    "vkGetShaderModuleIdentifierEXT",
    "vkGetSwapchainImagesKHR",
    "vkInitializePerformanceApiINTEL",
    "vkInvalidateMappedMemoryRanges",
    "vkMapMemory",
    "vkMapMemory2",
    "vkMapMemory2KHR",
    "vkMergePipelineCaches",
    "vkQueueBeginDebugUtilsLabelEXT",
    "vkQueueBindSparse",
    "vkQueueEndDebugUtilsLabelEXT",
    "vkQueueInsertDebugUtilsLabelEXT",
    "vkQueuePresentKHR",
    "vkQueueSetPerformanceConfigurationINTEL",
    "vkQueueSubmit",
    "vkQueueSubmit2",
    "vkQueueSubmit2KHR",
    "vkQueueWaitIdle",
    "vkReleaseFullScreenExclusiveModeEXT",
    "vkReleasePerformanceConfigurationINTEL",
    "vkReleaseProfilingLockKHR",
    "vkResetCommandBuffer",
    "vkResetCommandPool",
    "vkResetDescriptorPool",
    "vkResetEvent",
    "vkResetFences",
    "vkResetQueryPool",
    "vkResetQueryPoolEXT",
    "vkSetDebugUtilsObjectNameEXT",
    "vkSetDebugUtilsObjectTagEXT",
    "vkSetDeviceMemoryPriorityEXT",
    "vkSetEvent",
    "vkSetHdrMetadataEXT",
    "vkSetPrivateData",
    "vkSetPrivateDataEXT",
    "vkSignalSemaphore",
    "vkSignalSemaphoreKHR",
    "vkTransitionImageLayout",
    "vkTransitionImageLayoutEXT",
    "vkTrimCommandPool",
    "vkTrimCommandPoolKHR",
    "vkUninitializePerformanceApiINTEL",
    "vkUnmapMemory",
    "vkUnmapMemory2",
    "vkUnmapMemory2KHR",
    "vkUpdateDescriptorSetWithTemplate",
    "vkUpdateDescriptorSetWithTemplateKHR",
    "vkUpdateDescriptorSets",
    "vkWaitForFences",
    "vkWaitForPresentKHR",
    "vkWaitSemaphores",
    "vkWaitSemaphoresKHR",
    "vkWriteAccelerationStructuresPropertiesKHR",
};

static int glad_vulkan_is_device_function(const char *name) {
    /* Exists as a workaround for:
     * https://github.com/KhronosGroup/Vulkan-LoaderAndValidationLayers/issues/2323
     *
     * `vkGetDeviceProcAddr` does not return NULL for non-device functions.
     */
    int i;
    int length = sizeof(DEVICE_FUNCTIONS) / sizeof(DEVICE_FUNCTIONS[0]);

    for (i=0; i < length; ++i) {
        if (strcmp(DEVICE_FUNCTIONS[i], name) == 0) {
            return 1;
        }
    }

    return 0;
}

struct _glad_vulkan_userptr {
    void *vk_handle;
    VkInstance vk_instance;
    VkDevice vk_device;
    PFN_vkGetInstanceProcAddr get_instance_proc_addr;
    PFN_vkGetDeviceProcAddr get_device_proc_addr;
};

static GLADapiproc glad_vulkan_get_proc(void *vuserptr, const char *name) {
    struct _glad_vulkan_userptr userptr = *(struct _glad_vulkan_userptr*) vuserptr;
    PFN_vkVoidFunction result = NULL;

    if (userptr.vk_device != NULL && glad_vulkan_is_device_function(name)) {
        result = userptr.get_device_proc_addr(userptr.vk_device, name);
    }

    if (result == NULL && userptr.vk_instance != NULL) {
        result = userptr.get_instance_proc_addr(userptr.vk_instance, name);
    }

    if(result == NULL) {
        result = (PFN_vkVoidFunction) glad_dlsym_handle(userptr.vk_handle, name);
    }

    return (GLADapiproc) result;
}



static void* glad_vulkan_dlopen_handle(GladVulkanContext *context) {
    static const char *NAMES[] = {
#if GLAD_PLATFORM_APPLE
        "libvulkan.1.dylib",
#elif GLAD_PLATFORM_WIN32
        "vulkan-1.dll",
        "vulkan.dll",
#else
        "libvulkan.so.1",
        "libvulkan.so",
#endif
    };

    if (context->glad_loader_handle == NULL) {
        context->glad_loader_handle = glad_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return context->glad_loader_handle;
}

static struct _glad_vulkan_userptr glad_vulkan_build_userptr(void *handle, VkInstance instance, VkDevice device) {
    struct _glad_vulkan_userptr userptr;
    userptr.vk_handle = handle;
    userptr.vk_instance = instance;
    userptr.vk_device = device;
    userptr.get_instance_proc_addr = (PFN_vkGetInstanceProcAddr) glad_dlsym_handle(handle, "vkGetInstanceProcAddr");
    userptr.get_device_proc_addr = (PFN_vkGetDeviceProcAddr) glad_dlsym_handle(handle, "vkGetDeviceProcAddr");
    return userptr;
}

int gladLoaderLoadVulkanContext(GladVulkanContext *context, VkInstance instance, VkPhysicalDevice physical_device, VkDevice device) {
    int version = 0;
    void *handle = NULL;
    int did_load = 0;
    struct _glad_vulkan_userptr userptr;

    did_load = context->glad_loader_handle == NULL;
    handle = glad_vulkan_dlopen_handle(context);
    if (handle != NULL) {
        userptr = glad_vulkan_build_userptr(handle, instance, device);

        if (userptr.get_instance_proc_addr != NULL && userptr.get_device_proc_addr != NULL) {
            version = gladLoadVulkanContextUserPtr(context, physical_device, glad_vulkan_get_proc, &userptr);
        }

        if (!version && did_load) {
            gladLoaderUnloadVulkanContext(context);
        }
    }

    return version;
}



void gladLoaderUnloadVulkanContext(GladVulkanContext *context) {
    if (context->glad_loader_handle != NULL) {
        glad_close_dlopen_handle(context->glad_loader_handle);
        context->glad_loader_handle = NULL;
    }
}

#endif /* GLAD_VULKAN */

#ifdef __cplusplus
}
#endif
