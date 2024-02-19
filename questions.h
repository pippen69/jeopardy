#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CATEGORIES 3
#define MAX_QUESTIONS 3
#define MAX_CATEGORY_LENGTH 100
#define MAX_QUESTION_LENGTH 100
#define MAX_ANSWER_LENGTH 100


struct Question {
    char category[MAX_CATEGORY_LENGTH];
    char question[MAX_QUESTION_LENGTH];
    char answer[MAX_ANSWER_LENGTH];
    int value;
    bool answered;
};

// Function prototypes
void initialize_game(void);
void display_categories(void);
void display_question(char *category, int value);
bool valid_answer(char *category, int value, char *answer);
bool already_answered(char *category, int value);

#endif /* QUESTIONS_H */
