#include <stdint.h>

typedef void * HANDLE_LDAC_BT;

/*
 * PipeWire's LDAC decoder path expects this Sony-style symbol.
 * This libldacdec implementation does not expose detailed Sony-compatible
 * error codes, so return 0 for now. This is only used for logging after
 * failures, not for the successful decode path.
 */
int ldacBT_get_error_code(HANDLE_LDAC_BT handle)
{
    (void) handle;
    return 0;
}
