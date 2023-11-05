/* Top LEL */
/*Scenerio



The world has been overthrown by internet-slang. As a local Doctor you have received a CRITICAL note regarding a new patient in the hospital who has overused acronyms such as "lol" and "lmao". All that you are supplied with is a chunk of text the person wrote before the incident, and your job is to determine (based on how many times they lol'd) what their stability is.

Problem Statement

You will be supplied with a block of text, 3
Keywords lol = 1 laugh point (because they laughed)
rofl = 2 laugh points (they are on the floor laughing)
lmao = 3 laugh points (they laughed so hard they lost weight)
lel = 4 laugh points (intense laugher has killed several parts of the brain, thus resulting in mistyping even the most simple acronyms such as "lol")

As you can see each keyword is associated with laugh points. All keywords will be separated by spaces, so don't worry about text such as "trolololol". You must add all these points up throughout the text, finding the total. Your output will be based on the number of laugh points.

Output choices
1-5 laugh points = "Patient has bright red face"
6-12 laugh points = "Patient is unable to speak"
13-20 laugh points = "Patient's sides are mildly bruised"
21-30 laugh points = "Patient has broken jaw, fractured ribs"
31-49 laugh points = "Patient is in a coma"
50+ laugh points = "Patient is dead"


SAMPLE Input



omg lol you guys check thsi thread lmao! legit top lel right there bahah look at the guys face oh man lol

SAMPLE Output


Patient is unable to speak


Explanation


The keyword "lol" appeared 2 times, and is worth 1 point each. 2x1 = 2
The keyword "lmao" appeared once, and is worth 3 points each. 3x1=3
The keyword "lel" appeared once, and is worth 4 points each. 4x1=4
The sum of all points = 9, and is between 6-12, which results in the output shown. */

//Code
//strtok() visit@  https://www.youtube.com/watch?v=34DnZ2ewyZo
#include<stdio.h>
#include<string.h>
int laught_points(char *text){
    char * piece = strtok(text, " ");\
    int points = 0;
    while(piece != NULL){
        //strcmp return 0 if both the string matches
        if(strcmp(piece, "lol")==0){
            points +=1;
        }else if(strcmp(piece, "rofl") == 0){
            points +=2;
        }else if(strcmp(piece, "lmao") == 0){
            points +=3;
        }else if(strcmp(piece, "lel") == 0){
            points +=4;
        }
        piece = strtok(NULL, " ");
    }
    return points;
}

const char* determine_stability(char *text){
    int points = laught_points(text);
    if(points >=1 && points <= 5){
        return "Patient has bright red face";
    }else if(points >5 && points <=12){
        return "Patient is unable to speak";
    }else if(points > 12 && points <=20){
        return "Patient's sides are mildly bruised";
    }else if(points >20 && points<=30){
        return "Patient has broken jaw, fractured ribs";
    }else if(points >30 && points <=49){
        return "Patient is in a coma" ;
    }else if(points >= 50){
        return "Patient is dead";
    }
    return "Invalid Input";
}

int main(){
    char string[10000];
    const char* result;
   // printf("Enter string: ");
    fgets(string, 10000, stdin);
    result=determine_stability(string);
    printf(result);
    return 0;
}

