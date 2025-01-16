/*
 * Copyright (c) 2015 TDK Invensense
 *
 * SPDX-License-Identifier: BSD 3-Clause
 */

#ifndef _INV_IDD_EXPORT_H_
#define _INV_IDD_EXPORT_H_

#if defined(_WIN32)
	#if !defined(INV_EXPORT) && defined(INV_DO_DLL_EXPORT)
		#define INV_EXPORT __declspec(dllexport)
	#elif !defined(INV_EXPORT) && defined(INV_DO_DLL_IMPORT)
		#define INV_EXPORT __declspec(dllimport)
	#endif
#endif

#if !defined(INV_EXPORT)
	#define INV_EXPORT
#endif

#endif /* _INV_IDD_EXPORT_H_ */
