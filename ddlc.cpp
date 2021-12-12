#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
int a = 0;
int lim = 1;
int event = 1;
char c;
int enter(){
	c = 0;
	switch(event){
		case 1:
			switch(a){
				case 0:
					event = 2;
					break;
				case 1:
					event = 3;
					break;
			}
	}
}


int main() {
	printf("hello\n\n >hi\n  bye ");
	    
	    Key:
	    while (1) {
	        if (_kbhit()) {              
	            c = _getch();
				//printf("%d",c);          
	            if (c == -32) {          
	        		c = _getch();
	     
                	switch (c) {
                	case LEFT:
                    	if(a==0)
                    		a=lim;
                    	else a=a-1;
                    	break;
                	case RIGHT:
                    	if(a==lim)
                    		a=0;
                    	else a=a+1;
                    	break;
                	case UP:
	                    if(a==lim)
	                    	a=0;
	                    else a=a+1;
	                    break;
                	case DOWN:
                 	   if(a==0)
                    		a=lim;
                    	else a=a-1;
                    	break;
       	    		}
       	    	Nevigate:
       	    	switch(event){
       	    		case 1:
       	    			goto Event001;
       	    		case 2:
       	    			goto Event002;
       	    		case 3:
       	    			goto END;
				   }
        		}
        	}
        	
        	else if(c == 13){
        		enter();
        		goto Nevigate;
			}
	}



    Event001:
    lim = 1; 
    system("cls");
    if(a==0){
		printf("hello\n\n >hi\n  bye ");
	}
	else{
		printf("hello\n\n  hi\n >bye ");
	}
	goto Key;

	Event002:
	lim = 2;
	system("cls");
	switch(a){
		case 0:
			printf("Event002\n >Choose\n  Or\n  Not");
			break;
		case 1:
			printf("Event002\n  Choose\n >Or\n  Not");
			break;
		case 2:
			printf("Event002\n  Choose\n  Or\n >Not");
			break;
	}
	goto Key;
	
	END:
	system("cls");
	printf("END");
    return 0;
	}
