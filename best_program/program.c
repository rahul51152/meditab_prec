#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5
char**** get_document(char* text) {
	printf("%s\n",text);
    int paragraph_count = 0, sentence_count = 0, word_count = 0;   
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '\n') {
            paragraph_count++;
	    printf("%d",paragraph_count++);
            sentence_count = 0; 
        } else if (text[i] == '.') {
            sentence_count++;
            word_count = 0; 
        } else if (text[i] == ' ') {
            word_count++;
        }
    }
    
    char**** document = (char****)malloc((paragraph_count + 1) * sizeof(char***));
    
    char* paragraph_start = text;
    char* sentence_start = text;
    char* word_start = text;
    
    int p = 0, s = 0, w = 0;
    
    for (int i = 0; text[i] != '\0'; i++) {
        
        
        if (text[i] == '\n') {
            document[p] = (char***)malloc((sentence_count + 1) * sizeof(char**));
            s = 0; 
            sentence_start = &text[i + 1]; 
        } 
        
        
        else if (text[i] == '.') {
            document[p][s] = (char**)malloc((word_count + 1) * sizeof(char*));
            w = 0; 
            sentence_start = &text[i + 1]; 
        } 
        
        
        
        else if (text[i] == ' ' || text[i] == '\0') {
            document[p][s][w] = (char*)malloc((i - (int)(word_start - text) + 1) * sizeof(char));
            strncpy(document[p][s][w], word_start, i - (int)(word_start - text));
            document[p][s][w][i - (int)(word_start - text)] = '\0'; 
            w++; 
            word_start = &text[i + 1]; 
        }
    }
    
    return document;
}

char* get_input_text() {
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    printf("%s\n",doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
}

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main(){
    char* text = get_input_text();
    char**** document = get_document(text);
    
    return 0;
}
