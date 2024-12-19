// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов, 
// которые начинаются и заканчиваются одной и той же буквой. 
int task3(char *s)
{
    int count = 0; 
    const char* word_start = NULL; 

    for (const char* p = s; ; ++p) {
        
        if (*p == ' ' || *p == '\0') {
            if (word_start) { 
                char first = *word_start;  
                char last = *(p - 1);      
                if (first == last) {
                    ++count; 
                }
                word_start = NULL;
            }
            if (*p == '\0') break; 
        }
        else if (!word_start) {
            word_start = p; 
        }
    }

    return count;
}
}
