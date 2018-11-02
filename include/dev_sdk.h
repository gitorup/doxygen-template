/**
 * @file    dev_sdk.h
 * @brief   sdk output interfaces
**/
#ifndef _DEV_SDK_H_
#define _DEV_SDK_H_

/**
 * sdk information
**/
struct dev_sdk_info {
    char *serial_no; /**< serial number  */
    char *lisence_id; /**< lisence id */
    char *lisence_key; /**< lisence key */
    int p2p_factory_type; /**< p2p factory type */
};

/**
 * @fn      dev_sdk_init(void)
 * @brief   init sdk resource
 *
 * @return  On success, return 0. On error, return error code.
**/
extern int dev_sdk_init(void);

/**
 * @fn      dev_sdk_start_service(void)
 * @brief   start sdk service
 *
 * @return  On success, return 0. On error, return error code.
**/
extern int dev_sdk_start_service(void);

/**
 * @fn      dev_sdk_exit(void)
 * @brief   exit sdk service and free sdk resource
 *
 * @return  On success, return 0. On error, return error code.
**/
extern int dev_sdk_exit(void);

/**
 * @fn          int dev_sdk_set_volume(int volume)
 * @brief       set device volume
 *
 * @param       [in] volume - input volume value
 * @return      On success, return 0. On error, return error code.
**/
extern int dev_sdk_set_volume(int volume);

/**
 * @fn          int dev_sdk_get_volume(int *volume)
 * @brief       get device volume
 *
 * @param       [out] volume - output volume value
 * @return      On success, return 0. On error, return error code.
**/
extern int dev_sdk_get_volume(int *volume);

#endif //_DEV_SDK_H_

