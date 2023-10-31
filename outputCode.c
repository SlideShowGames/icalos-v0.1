#include <stdio.h>
#include <stdlib.h>

void HighLands();
void IDE();
void notepad();
void OSmenu();
void Usbvideo();
void PickupVideo();
void calculator();
void Settings();
void WINDGOV();

int main() {
    char UserName[100];
    printf("make a name: ");
    scanf("%s", UserName);
    OSmenu();
    return 0;
}

void HighLands() {
    printf("█░█ █ █▀▀ █░█ █░░ ▄▀█ █▄░█ █▀▄ █▀\n");
    printf("█▀█ █ █▄█ █▀█ █▄▄ █▀█ █░▀█ █▄▀ ▄█ BETA DEMO\n");
    char Play[10];
    printf("Press E to Play! ");
    scanf("%s", Play);
    if (Play[0] == 'E') {
        char d1[100];
        printf("You wake up in a grassy field next to a chicken. What do you do? ");
        scanf("%s", d1);
        if (strcmp(d1, "kill") == 0) {
            printf("You killed the chicken and ate it... Chicken Ending\n");
            OSmenu();
        }
        if (strcmp(d1, "make") == 0) {
            printf("You made it your pet!\n");
            printf("Pet Gained! Pet level: 1 atk: 10 hp: 75\n");
            printf("Level gained! You are now level 2!\n");
            char d2[10];
            printf("As you pet the chicken you see a cave. Do you go in? ");
            scanf("%s", d2);
            if (strcmp(d2, "no") == 0) {
                printf("You don't go in and just walk home... somehow.\n");
                printf("just no... Ending\n");
                OSmenu();
            }
            if (strcmp(d2, "yes") == 0) {
                printf("You walk into the cave, you find a sword and pick it up.\n");
                printf("SWORD EARNED! atk: 25 hp: 250\n");
                printf("XP GAINED 50! ----/____\n");
                char d3[100];
                printf("You find a dark elf who you have to fight to get further into the cave. What is your first move? chicken or sword? ");
                scanf("%s", d3);
                if (strcmp(d3, "sword") == 0) {
                    printf("You killed the dark elf causing the cave to be open.\n");
                    printf("You find a portal. You go in and it takes you to the Scottish HIGHLANDS!\n");
                    printf("You uncover your eyes seeing the beautiful mountains. You look to the right and see a bunch of high elf towns on the ground and your house on the top of the mountain.\n");
                }
                char d3_1[10];
                printf("You walk down the cave and you go to a high elf. He offers to give you a pet Rolof. Do you accept? ");
                scanf("%s", d3_1);
                if (strcmp(d3_1, "yes") == 0) {
                    printf("You gained a new pet!\n");
                    printf("Pet gained! atk: 15 hp: 125 level: 2.4!\n");
                    printf("XP GAINED 50! ----/____ YOU ARE NOW LEVEL 2\n");
                    char fd[10];
                    printf("You go up to a mountain; you have to climb it to get to your house. Do you climb? ");
                    scanf("%s", fd);
                    if (strcmp(fd, "yes") == 0) {
                        printf("You climb the mountain and lose 50 health but it no longer matters because with the help of your new pet you were able to climb back to your house and go to bed.....\n");
                        printf("You wake up in the middle of the night and you remember that there are no elves in Scotland! That you see a portal. In it you see the lowlands of Sweden with people walking and your real house.\n");
                        printf("Thank you for playing the Highlands BETA demo. Please wait until the real game is out and also wait for the LOWLANDS! GOOD ENDING!\n");
                        OSmenu();
                    }
                }
                if (strcmp(d3, "chicken") == 0) {
                    printf("You dealt 1 damage to the elf. The elf now has 29 health.\n");
                    char d3_2[100];
                    printf("Your health is now 75 after the elf hit you. Pick another unused move. ");
                    scanf("%s", d3_2);
                    if (strcmp(d3_2, "sword") == 0) {
                        printf("You killed the dark elf causing the cave to be open.\n");
                        printf("You find a portal. You go in and it takes you to the Scottish HIGHLANDS!\n");
                        printf("You uncover your eyes seeing the beautiful mountains. You look to the right and see a bunch of high elf towns on the ground and your house on the top of the mountain.\n");
                        char d3_1[10];
                        printf("You walk down the cave and you go to a high elf. He offers to give you a pet Rolof. Do you accept? ");
                        scanf("%s", d3_1);
                        if (strcmp(d3_1, "no") == 0) {
                            printf("You did not accept the pet, you tried to climb the mountain to get to your house but you fail. You died! bad ending!\n");
                            OSmenu();
                        }
                        char fd[10];
                        printf("Did not climb the mountain knowing something is up about this place. You go to the shores and you build a raft to Sweden where you find your real house. You still don't know what happened that day but you found out a mirrored middle earth exists. TRUE ENDING!\n");
                        OSmenu();
                    }
                }
            }
        }
    }
}

void IDE() {
    printf("Welcome to the code for fun IDE your text cannot be edited when you are done\n");
    char code[100];
    printf("if you have a code type 1: ");
    scanf("%s", code);
    char one[100], two[100], three[100], four[100], five[100];
    printf("1: ");
    scanf("%s", one);
    printf("2: ");
    scanf("%s", two);
    printf("3: ");
    scanf("%s", three);
    printf("4: ");
    scanf("%s", four);
    printf("5: ");
    scanf("%s", five);
    printf("%s %s %s %s %s\n", one, two, three, four, five);
    OSmenu();
}

void notepad() {
    char yesno[10];
    printf("Welcome to notepad. ");
    printf("If you have a note type 1: ");
    scanf("%s", yesno);
    char doc[100];
    printf("Enter your note: ");
    scanf("%s", doc);
    printf("Your note will be saved as %s\n", doc);
    if (strcmp(yesno, "1") == 0) {
        printf("%s\n", doc);
    }
    OSmenu();
}

void OSmenu() {
    char MainMenu[10];
    printf("Welcome To iCal OS 2.1\n");
    printf("More apps are in different files\n");
    printf("What Would You Like To Do?\n");
    printf("[1]. Calculator\n");
    printf("[2]. usb.pyVideo\n");
    printf("[3]. pickup.pyVideo\n");
    printf("[4]. how to install new files\n");
    printf("[5]. NotePad\n");
    printf("[6]. IDE\n");
    printf("[7]. Settings\n");
    printf("[8]. HighLands\n");
    printf("[9]. HighLands cmds\n");
    printf("[10]. More\n");
    scanf("%s", MainMenu);
    if (strcmp(MainMenu, "1") == 0) {
        calculator();
    }
    if (strcmp(MainMenu, "2") == 0) {
        Usbvideo();
        OSmenu();
    }
    if (strcmp(MainMenu, "3") == 0) {
        PickupVideo();
        OSmenu();
    }
    if (strcmp(MainMenu, "4") == 0) {
        printf("To install new files you must...\n");
        printf("1. import a defined word for copy and paste or writing it.\n");
        printf("2. on the menu put an extra number then an if command that uses your word.\n");
        printf("3. test it.\n");
        OSmenu();
    }
    if (strcmp(MainMenu, "5") == 0) {
        notepad();
    }
    if (strcmp(MainMenu, "6") == 0) {
        IDE();
    }
    if (strcmp(MainMenu, "7") == 0) {
        Settings();
    }
    if (strcmp(MainMenu, "8") == 0) {
        HighLands();
    }
    if (strcmp(MainMenu, "9") == 0) {
        printf("Current commands are: kill it, make it a pet for the first decisions. no, yes for the second decisions.\n");
        OSmenu();
    }
    if (strcmp(MainMenu, "10") == 0) {
        char SecondMenu[10];
        printf("[1]. Go to main menu\n");
        scanf("%s", SecondMenu);
        if (strcmp(SecondMenu, "1") == 0) {
            OSmenu();
        }
        if (strcmp(SecondMenu, "2") == 0) {
            printf("no\n");
        }
    }
}

void Usbvideo() {
    printf("blue\n");
    printf("Green\n");
    printf("right 90\n");
    printf("forward 100\n");
    printf("right 90\n");
    printf("forward 100\n");
    printf("right 90\n");
    printf("forward 100\n");
    printf("right 90\n");
    printf("forward 100\n");
    printf("white\n");
    printf("left 90\n");
    printf("left 90\n");
    printf("forward 50\n");
    printf("blue\n");
    printf("circle 100\n");
    printf("black\n");
    printf("right 90\n");
    printf("forward 100\n");
    printf("right 90\n");
    printf("forward 100\n");
    printf("left 90\n");
    printf("forward 50\n");
    printf("python-powered Turtler.gif\n");
    OSmenu();
}

void PickupVideo() {
    printf("black\n");
    printf("white\n");
    printf("forward 100\n");
    printf("left 90\n");
    printf("forward 100\n");
    printf("forward 100\n");
    printf("right 90\n");
    printf("forward 100\n");
    printf("right 65\n");
    printf("backward\n");
    printf("circle 55\n");
    printf("forward 100\n");
    printf("black\n");
    printf("forward 100\n");
    printf("red\n");
    printf("circle 40\n");
    printf("python-powered Turtler.gif\n");
    OSmenu();
}

void calculator() {
    printf("Current mode: addition\n");
    char number1[100], number2[100];
    printf("Enter first number: ");
    scanf("%s", number1);
    printf("Enter second number: ");
    scanf("%s", number2);
    float vsum = atof(number1) + atof(number2);
    printf("%f\n", vsum);
    printf("Mode now: subtraction\n");
    char number3[100], number4[100];
    printf("Enter first number: ");
    scanf("%s", number3);
    printf("Enter second number: ");
    scanf("%s", number4);
    float vsum2 = atof(number3) - atof(number4);
    printf("%f\n", vsum2);
    printf("Mode now: division\n");
    char number5[100], number6[100];
    printf("Enter first number: ");
    scanf("%s", number5);
    printf("Enter second number: ");
    scanf("%s", number6);
    float vsum3 = atof(number5) / atof(number6);
    printf("%f\n", vsum3);
    printf("Mode now: multiplication\n");
    char number7[100], number8[100];
    printf("Enter first number: ");
    scanf("%s", number7);
    printf("Enter second number: ");
    scanf("%s", number8);
    float vsum4 = atof(number7) * atof(number8);
    OSmenu();
}

void Settings() {
    printf("Welcome to settings! Here you can exit or change your OS settings.\n");
    printf("Choose a setting:\n");
    char Setting1[10];
    printf("[1]. Exit\n");
    printf("[2]. Manage packages\n");
    scanf("%s", Setting1);
    if (strcmp(Setting1, "2") == 0) {
        printf("Sorry, coming soon!\n");
        OSmenu();
    }
    if (strcmp(Setting1, "1") == 0) {
        exit(0);
    }
}
