// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить длину самого короткого слова в строке.
#include <limits.h>
int task3(char* s)
{
	int m = INT_MAX, start = 0, i = 0;
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            if (i - start < m && i - start > 0)
                m = i - start;

            while (s[i] == ' ') 
                i++;
            start = i;
        } 
        else
            i++;
    }
    if (i - start < m && i - start > 0) {
        m = i - start; 
    }
    return (m == INT_MAX) ? 0 : m;
}
