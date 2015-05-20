#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE *logdata;
	char text[256];
	char text1[256];
	char *logtext, *tp;
	char command[400];
	
	logdata = fopen("tvrock.log2", "r");
	if(logdata == NULL){
		printf("ERROR!!\n");
		return -1;
	} else {
		printf("LOAD LOGDATA\n");
	}
	
	if(argv[1] == NULL || argv[2] == NULL) return -1;
	strcpy(text1, "【録画ログ】");
	strcat(text1, argv[1]);
	strcat(text1, " [");
	
	for(int j=0; j<30;j++){
		fgets(text, sizeof(text), logdata);
		if(strstr(text, argv[1])!=NULL && strstr(text, "Card=OK")){
			printf("found it!\n");
			tp = strtok(text, ",");
			for(int i=1; i < 10; i++){
			tp = strtok(NULL, ",");
				if(i==1 || i==2 || i==4){
					strcat(text1, tp);
					strcat(text1, ", ");
				}
				if(i==5){
					strcat(text1, tp);
				}
			}
			
			strcat(text1,"]");
			printf("%s\n", text1);
			strcpy(command, argv[2]);
			strcat(command, " /t ");
			strcat(command, text1);
			system(command);
			fclose(logdata);
			return 0;
		}
	}
	
	return -1;
}
