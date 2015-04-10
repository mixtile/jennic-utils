#ifndef _JENNIC_CORE_H_
#define _JEIINC_CORE_H_

#include <sys/types.h>

typedef enum
{
    /* cmds referring to firmware updating */
    E_ZB_CMD_FLASH_ERASE_REQUEST                = 0x07,
    E_ZB_CMD_FLASH_ERASE_RESPONSE				= 0x08,
    E_ZB_CMD_FLASH_PROGRAM_REQUEST				= 0x09,
    E_ZB_CMD_FLASH_PROGRAM_RESPONSE			= 0x0a,
    E_ZB_CMD_FLASH_READ_REQUEST				= 0x0b,
    E_ZB_CMD_FLASH_READ_RESPONSE				= 0x0c,
    E_ZB_CMD_FLASH_SECTOR_ERASE_REQUEST		= 0x0d,
    E_ZB_CMD_FLASH_SECTOR_ERASE_RESPONSE		= 0x0e,
    E_ZB_CMD_FLASH_WRITE_STATUS_REGISTER_REQUEST= 0x0f,
    E_ZB_CMD_FLASH_WRITE_STATUS_REGISTER_RESPONSE= 0x10,
    E_ZB_CMD_RAM_WRITE_REQUEST					= 0x1d,
    E_ZB_CMD_RAM_WRITE_RESPONSE					= 0x1e,
    E_ZB_CMD_RAM_READ_REQUEST					= 0x1f,
    E_ZB_CMD_RAM_READ_RESPONSE					= 0x20,
    E_ZB_CMD_RAM_RUN_REQUEST					= 0x21,
    E_ZB_CMD_RAM_RUN_RESPONSE					= 0x22,
    E_ZB_CMD_FLASH_READ_ID_REQUEST				= 0x25,
    E_ZB_CMD_FLASH_READ_ID_RESPONSE				= 0x26,
    E_ZB_CMD_SET_BAUD_REQUEST					= 0x27,
    E_ZB_CMD_SET_BAUD_RESPONSE					= 0x28,
    E_ZB_CMD_FLASH_SELECT_TYPE_REQUEST			= 0x2c,
    E_ZB_CMD_FLASH_SELECT_TYPE_RESPONSE			= 0x2d,

    E_ZB_CMD_GET_CHIPID_REQUEST                 = 0x32,
    E_ZB_CMD_GET_CHIPID_RESPONSE                = 0x33,
} ezb_ll_msg_t, *pezb_ll_msg_t;


typedef int (*func_jnwrap_init_t)(int para0, int para1);
typedef int (*func_jnwrap_pre_t)(void);
typedef int (*func_jnwrap_talk_t)(ezb_ll_msg_t stype, u_int8_t sheaderlen, u_int8_t *psheader, u_int8_t sdatalen, u_int8_t *psdata,
                   pezb_ll_msg_t prtype, u_int8_t *prlen, u_int8_t *prbuf, int timeout);
typedef int (*func_jnwrap_fini_t)();

typedef struct
{
    func_jnwrap_init_t init;
    func_jnwrap_pre_t prepare;
    func_jnwrap_talk_t talk;
    func_jnwrap_fini_t fini;
} stjn_wrapper_t, *pstjn_wrapper_t;

void jennic_wrapper_init(pstjn_wrapper_t pwrapper);

#endif