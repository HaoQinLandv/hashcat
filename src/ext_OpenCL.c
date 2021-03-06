/**
 * Author......: See docs/credits.txt
 * License.....: MIT
 */

#include "common.h"
#include "types.h"
#include "memory.h"
#include "event.h"
#include "ext_OpenCL.h"

const char *val2cstr_cl (cl_int CL_err)
{
  #define CLERR(a) case a: return #a

  switch (CL_err)
  {
    CLERR (CL_BUILD_PROGRAM_FAILURE);
    CLERR (CL_COMPILER_NOT_AVAILABLE);
    CLERR (CL_DEVICE_NOT_FOUND);
    CLERR (CL_INVALID_ARG_INDEX);
    CLERR (CL_INVALID_ARG_SIZE);
    CLERR (CL_INVALID_ARG_VALUE);
    CLERR (CL_INVALID_BINARY);
    CLERR (CL_INVALID_BUFFER_SIZE);
    CLERR (CL_INVALID_BUILD_OPTIONS);
    CLERR (CL_INVALID_COMMAND_QUEUE);
    CLERR (CL_INVALID_CONTEXT);
    CLERR (CL_INVALID_DEVICE);
    CLERR (CL_INVALID_DEVICE_TYPE);
    CLERR (CL_INVALID_EVENT);
    CLERR (CL_INVALID_EVENT_WAIT_LIST);
    CLERR (CL_INVALID_GLOBAL_OFFSET);
    CLERR (CL_INVALID_HOST_PTR);
    CLERR (CL_INVALID_KERNEL);
    CLERR (CL_INVALID_KERNEL_ARGS);
    CLERR (CL_INVALID_KERNEL_DEFINITION);
    CLERR (CL_INVALID_KERNEL_NAME);
    CLERR (CL_INVALID_MEM_OBJECT);
    CLERR (CL_INVALID_OPERATION);
    CLERR (CL_INVALID_PLATFORM);
    CLERR (CL_INVALID_PROGRAM);
    CLERR (CL_INVALID_PROGRAM_EXECUTABLE);
    CLERR (CL_INVALID_QUEUE_PROPERTIES);
    CLERR (CL_INVALID_SAMPLER);
    CLERR (CL_INVALID_VALUE);
    CLERR (CL_INVALID_WORK_DIMENSION);
    CLERR (CL_INVALID_WORK_GROUP_SIZE);
    CLERR (CL_INVALID_WORK_ITEM_SIZE);
    CLERR (CL_MISALIGNED_SUB_BUFFER_OFFSET);
    CLERR (CL_MAP_FAILURE);
    CLERR (CL_MEM_COPY_OVERLAP);
    CLERR (CL_MEM_OBJECT_ALLOCATION_FAILURE);
    CLERR (CL_OUT_OF_HOST_MEMORY);
    CLERR (CL_OUT_OF_RESOURCES);
  }

  return "CL_UNKNOWN_ERROR";
}
