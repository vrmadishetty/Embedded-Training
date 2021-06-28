/* Array of function pointers use case 2 */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int keyboard_Interrupt(void)
{
	printf("Keyboard Interrupt\n");
}

int mouse_Interrupt(void)
{
	printf("Mouse Interrupt\n");
}

int USB_Interrupt(void)
{
	printf("USB Interrupt\n");
}

typedef struct
{
	char operation[20];
	int (*isr)();	
}IVT_t;


int main()
{
	IVT_t isr_info[]  = {
				{"KEYBOARD", keyboard_Interrupt}, 
				{"MOUSE", mouse_Interrupt}, 
				{"USB", USB_Interrupt}
			 };

	while(1)
	{
		isr_info[rand()%3].isr();
		sleep(2);
	}	
	return 0;
}
