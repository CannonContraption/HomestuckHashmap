char vowels [6]      = {'a','e','i','o','u','y'};
int  vowel_worth     = 1;
int  consonant_worth = 2;

void setCheapTrick(){
	vowels[5]='u';
}

void unsetCheapTrick(){
	vowels[5]='y';
}

int lettervalue(char c){
	for(int i = 0; i<6; i++){
		if(vowels[i]==c){
			return vowel_worth;
		}
	}
	return consonant_worth;
}
