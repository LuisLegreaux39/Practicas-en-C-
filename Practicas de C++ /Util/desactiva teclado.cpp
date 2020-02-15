#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<windows.h>

int main()
{

outportb(0x64,0xAD); /*Code for disabling the KEYBOARD*/
printf("Keyboard Disabled");
Sleep(5000);

printf("Keyboard Enabled");
outportb(0x64,0xAE); /*Code for enabling the KEYBOARD*/
getch();
}
