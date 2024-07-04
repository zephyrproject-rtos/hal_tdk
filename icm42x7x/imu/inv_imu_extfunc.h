/*
 * Copyright (c) 2018 TDK Invensense
 *
 * SPDX-License-Identifier: BSD 3-Clause
 */

/** @defgroup ExtFunc ExtFunc
 *  @brief External functions (to be implemented in application) required by the driver.
 *  @{
 */

/** @file  inv_imu_extfunc.h */

#ifndef _INV_IMU_EXTFUNC_H_
#define _INV_IMU_EXTFUNC_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Sleep function.
 *  @param[in] us  Sleep duration in microseconds (us).
 */
extern void inv_imu_sleep_us(uint32_t us);

/** @brief Get time function. Value is expected to be on 64 bits with a 1 us resolution.
 *  @return  The current time in us.
 */
extern uint64_t inv_imu_get_time_us(void);

#ifdef __cplusplus
}
#endif

#endif /* _INV_IMU_EXTFUNC_H_ */

/** @} */
