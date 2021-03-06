/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file   fatfs.h
  * @brief  Header for fatfs applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __fatfs_H
#define __fatfs_H
#ifdef __cplusplus
 extern "C" {
#endif

#include "ff.h"
#include "ff_gen_drv.h"
#include "user_diskio.h" /* defines USER_Driver as external */

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern uint8_t retUSER; /* Return value for USER */
extern char USERPath[4]; /* USER logical drive path */
extern FATFS USERFatFS; /* File system object for USER logical drive */
extern FIL USERFile; /* File object for USER */

void MX_FATFS_Init(void);

/* USER CODE BEGIN Prototypes */
uint32_t fatfs_read_file(const char *file, uint8_t *data, uint32_t size);
int32_t fatfs_read_file_at_pos(const char *file, uint8_t *data, uint32_t size, uint32_t p);
int32_t fatfs_get_file_size(const char *file);
uint32_t fatfs_write_to_a_file_at_pos (const char* file, char* buff, uint32_t size, uint32_t pos);
uint32_t fatfs_write_json_to_a_file_at_pos (const char* file, char* buff, uint32_t size, uint32_t pos);
void delete_a_file (const char * file);
uint8_t check_file (const char* file);
FRESULT create_a_dir (const char * path);
/* USER CODE END Prototypes */
#ifdef __cplusplus
}
#endif
#endif /*__fatfs_H */
