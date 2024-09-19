# Copyright (c) 2024 TDK Invensense
# SPDX-License-Identifier: Apache-2.0

if(CONFIG_ZEPHYR_HAL_TDK_MODULE)

  zephyr_library()
  
  if(CONFIG_USE_EMD_ICM42670S OR CONFIG_USE_EMD_ICM42670P)

  zephyr_include_directories(
    common 
    icm42x7x 
  )
  zephyr_include_directories_ifdef(CONFIG_USE_EMD_ICM42670P icm42x7x/icm42670p_h)
  zephyr_include_directories_ifdef(CONFIG_USE_EMD_ICM42670S icm42x7x/icm42670s_h)

  zephyr_library_sources(
    icm42x7x/imu/inv_imu_driver.c 
    icm42x7x/imu/inv_imu_transport.c
  )
  zephyr_library_sources_ifdef(CONFIG_TDK_APEX icm42x7x/imu/inv_imu_apex.c)

  endif()

endif()