#include <stdio.h>
void main()
{
    unsigned int compad[4], mask[4], netadr[4];
    int i;
    clrscr();
    printf("Enter the IP address (e.g., 192.168.1.10): ");
    scanf("%u.%u.%u.%u", &compad[3], &compad[2], &compad[1], &compad[0]);
    printf("Enter the subnet mask (e.g., 255.255.255.0): ");
    scanf("%u.%u.%u.%u", &mask[3], &mask[2], &mask[1], &mask[0]);
    for (i = 0; i < 4; i++)
	netadr[i] = compad[i] & mask[i];
    printf("\nNetwork address: %u.%u.%u.%u", netadr[3], netadr[2], netadr[1], netadr[0]);
    printf("\nSubnet mask: %u.%u.%u.%u", mask[3], mask[2], mask[1], mask[0]);
    printf("\nIP address: %u.%u.%u.%u\n", compad[3], compad[2], compad[1], compad[0]);
    getch();
}
