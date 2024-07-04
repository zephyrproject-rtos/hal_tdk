/*
 * Copyright (c) 2018 TDK Invensense
 *
 * SPDX-License-Identifier: BSD 3-Clause
 */

#ifndef _INV_IMU_H_
#define _INV_IMU_H_

#ifdef __cplusplus
extern "C" {
#endif

/** @defgroup IMU IMU
 *  @brief Describes IMU
 *  @{
 */

/** @file inv_imu.h */


/* Device ID */
#define ICM42670P

/* Device description */
#define INV_IMU_STRING_ID         "ICM42670P"
#define INV_IMU_WHOAMI            0x67
#define INV_IMU_REV               INV_IMU_REV_A
#define INV_IMU_IS_GYRO_SUPPORTED 1

#ifdef __cplusplus
}
#endif

#endif /* #ifndef _INV_IMU_H_ */

/** @} */
