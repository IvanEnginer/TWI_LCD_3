#define F_CPU 8000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <stdio.h>
#include "string.h"
#include "TWI.h"
#include "LCD_I2C.h"

int main(void)
{
	I2C_Init();//������������� ������
	lcd_init();//������������� LCD
	char buf[10];//�������� ������ ��� LCD
	lcd_clear();//������� LCD � ������� ������� � 0.0
	lcd_putstring("Hello World!");//������ �����
	string a[12]={"rsasg","efaef"};	
    while(1)
    {
		lcd_clear();//
		lcd_putstring("Test 1");//������ ������
		_delay_ms(1000);//��������
		lcd_clear();//
		lcd_putstring("Test 1.1");
		_delay_ms(1000);//��������
		lcd_clear();//
		lcd_putstring("Test 1.2");
		_delay_ms(1000);//��������
		lcd_clear();//
		lcd_gotoxy(0,1);	
		lcd_putstring("Test 1.3");
		_delay_ms(1000);//��������
		lcd_clear();//
		lcd_gotoxy(0,1);	
		lcd_putstring("Test 1.4");							
    }
}