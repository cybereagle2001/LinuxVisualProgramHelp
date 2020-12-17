//coded by cybereagle2001
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void updater(){
	system("clear");
	printf("|||||||||||||||||||||||||||||||\n");
	printf("   During the update some      \n");
	printf("   commands will not work      \n");
	printf("|||||||||||||||||||||||||||||||\n");
	system("sudo apt-get update");
        printf("Goodbye \n");
        printf("Thank you for using STIA_Root. If you had any problem contact us on cybereagle592@gmail.com or github.com/cybereeagle2001\n");
}

void upgrader(){
	system("clear");
	printf("|||||||||||||||||||||||||||||||\n");
        printf("   During the upgrade some      \n");
        printf("   commands will not work      \n");
        printf("|||||||||||||||||||||||||||||||\n");
	system("sudo apt-get upgrade");
        printf("Goodbye \n");
        printf("Thank you for using STIA_Root. If you had any problem contact us on cybereagle592@gmail.com or github.com/cybereeagle2001\n");
}

void terminal(){
	system("clear");
	printf("*****************************\n");
	printf("Hello user Be Like The Snake\n");
	printf("     work in silence  \n");
	printf("*******************************\n");
	system("sudo su");
}

void network_conf(){
	int x;
	system("clear");
	printf("-------------------------------\n");
	printf("      Here You will found      \n");
	printf("    ALL network information    \n");
	printf("-------------------------------\n");
	system("ifconfig");
	scanf("%d",&x);
        printf("Goodbye \n");
        printf("Thank you for using STIA_Root. If you had any problem contact us on cybereagle592@gmail.com or github.com/cybereeagle2001\n");
}

void directories(){
	int y;
	system("clear");
	printf("*******************************\n");
	printf("  Those all your directories \n");
	printf("         in the file \n");
	printf("*******************************\n");
	system("ls -a");
	scanf("%d",&y);
        printf("Goodbye \n");
        printf("Thank you for using STIA_Root. If you had any problem contact us on cybereagle592@gmail.com or github.com/cybereeagle2001\n");
}

void help(){
	int v;
	system("clear");
	printf("-----------------------------\n");
	printf("    Hello in Linux help      \n");
	printf("-----------------------------\n");
	printf(" * shutdown : shutdown the computer\n");
	printf(" * nano : usage(nano <filename>) : text and code editor\n");
	printf(" * sudo : usage(sudo <command>) : root privillege \n");
	printf(" * cd : usage(cd <directory>) : changing directories\n");
	printf(" * ping : usage (ping <ip or website>) : checking connection\n");
	printf(" * help : summary about bash command if UBUNTU run zsh will not work\n");
	printf(" * passwd : usage(passwd <username>) : changing user password\n");
	printf(" * ls : show directories in your position \n");
	printf(" * ls -a : show all directories even hidden files\n");
	printf(" * mv : usage(mv <filename> <new directory link>) : move a file from one directory to an other\n");
	printf(" * cp : usage(cp <filename> <new directory link>) : copy and paste the file from one directory to another\n");
	printf(" * rm : usage(rm <filename>) : remove the file\n");
	printf(" * mkdir : usage(mkdir <NewDirectoryName>) : create a new directory\n");
	scanf("%d",&v);
	printf("Goodbye \n");
	printf("Thank you for using STIA_Root. If you had any problem contact us on cybereagle592@gmail.com or github.com/cybereeagle2001\n");
}

void root(){
	char user;
	int menu;
	system("clear");
	printf("choose your username : ");
	scanf("%s",&user);
	system("clear");
	printf("|||||||||||||||||||||||||||||||||||||");
	printf("\n");
	printf("  Hello %s in STIA root \n",&user);
	printf("|||||||||||||||||||||||||||||||||||||");
	printf("\n");
	printf("please choose one option: \n");
	printf("    1) root access\n");
	printf("    2) network configuration\n");
	printf("    3) directories\n");
	printf("    4) linux commands\n");
	printf("    5) update the OS \n");
	printf("    6) upgrade the OS \n");
	printf("%s@STIAroot~$ ",&user);
	scanf("%d",&menu);
	if (menu == 1){
		terminal();
	}
	if (menu == 2){
		network_conf();
	}
	if (menu == 3){
		directories();
	}
	if(menu == 4){
		help();
	}
	if (menu == 5){
		updater();
	}
	if (menu == 6){
		upgrader();
	}
}

void main()
{
	int Agree;
	system("clear");
	printf("*********************************************************\n");
	printf("*                 Hello into STIA root                  *\n");
	printf("*     by = cybereagle2001 (Oussama Ben Hadj Dahman)     *\n");
	printf("*                                                       *\n");
	printf("*  If you will get root access You MUST accept That you *\n");
	printf("*          1) Don't practice  illegal activities        *\n");
	printf("*          2) You must respect other users privacy      *\n");
	printf("*          3) You Agree that Oussama Ben Hadj Dahman    *\n");
	printf("*           Is not Responsible of your activities       *\n");
	printf("*                                                       *\n");
	printf("* ||||||||||||||||||||||||||||||||||||||||||||||||||||| *\n");
	printf("*         This is made for learning Purpose only        *\n");
	printf("* ||||||||||||||||||||||||||||||||||||||||||||||||||||| *\n");
	printf("*********************************************************\n");
	printf("Do you Agree?\n");
	printf("     1* YES\n");
	printf("     2* NO\n");
	printf("anonymous~$ ");
	scanf("%d",&Agree);
	if ( Agree == 1){
		root();
	}
	else {
		system("clear");
		printf("Goodbye\n");
		printf("Thank you for useing STIA_Root. If you had any problem contact us on cybereagle592@gmail.com or on github.com/cybereagle2001");
	}
}
