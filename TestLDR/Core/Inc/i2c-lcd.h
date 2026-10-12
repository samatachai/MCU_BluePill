/*
 * i2c-lcd.h
 *
 *  Created on: Sep 11, 2026
 *      Author: Sam@CPE_RMUTT_uC-Lab
 */

#ifndef INC_I2C_LCD_H_
#define INC_I2C_LCD_H_

#include "stm32f1xx_hal.h"

void lcd_init (void);   // ฟังก์ชันเริ่มต้นใช้งาน LCD
void lcd_send_cmd (char cmd);  // ส่งคำสั่งควบคุม
void lcd_send_data (char data);  // ส่งตัวอักษรออกจอ
void lcd_send_string (char *str);  // ส่งข้อความออกจอ
void lcd_clear (void);  // ล้างหน้าจอ
void lcd_put_cur(int row, int col);  // เลื่อนเคอร์เซอร์ (แถว 0-1, คอลัมน์ 0-15)
void lcd_backlight_on(void);
void lcd_backlight_off(void);


#endif /* INC_I2C_LCD_H_ */
