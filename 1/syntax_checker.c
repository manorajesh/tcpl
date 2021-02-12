//
//  1-24.c
//  tcpl
//
//  Created by Mano Rajesh on 7/3/20.
//  Copyright © 2020 Mano Rajesh. All rights reserved.
//

//()()(((())()()()()()((((((())(())(()(((((()(()

#include <stdio.h>

#define PAREIN 0
#define PAREOUT 1
#define PAREMID 2
#define PAREMID2 3

#define BKIN 0
#define BKOUT 1

#define BSIN 0
#define BSOUT 1

#define QUOTEIN 0
#define QUOTEOUT 1

int main(void)
{
    char c, o = '0';
    
    int state1 = PAREOUT, state2 = BKOUT, state3 = BSOUT, state4 = QUOTEOUT;
    
    int i = 0, n = 0, m = 0, l = 0;
    
    int p = 0;
    
    while ((c = getchar()) != EOF)
    {
        c = l;
        if (l == '\n')
            l = 0;
        else
            ++l;
        if (c == '\'' && state4 == QUOTEOUT) {
            state4 = QUOTEIN;
        } else if (c == '\'' && state4 == QUOTEIN)
            state4 = QUOTEOUT;
        
        if (state4 == QUOTEOUT && c != '\'') {
            if (c == '(') {
                state1 = PAREIN;
                ++i;
                ++p;
            } else if (c == ')' && state1 == PAREIN) {
                if (p == 1) {
                    state1 = PAREOUT;
                    p = 0;
                    --i;
                    continue;
                }
                else {
                    state1 = PAREMID;
                    ++p;
                    --i;
                    continue;
                }
            }
            if (c == ')' && state1 == PAREMID) {
                --i;
                continue;
            } else if (c == ')' && state1 == PAREOUT)
                ++i;
            if (c == ')' && state1 == PAREMID2) {
                state1 = PAREOUT;
                p = 0;
                --i;
                continue;
            }
            if (c != ')' && state1 == PAREMID) {
                if (o == ')') {
                    if (i < 0) {
                        i += 2;
                        continue;
                    }
                }
                if (i == 0) {
                    state1 = PAREOUT;
                    p = 0;
                    continue;
                } else if (i >= 1) {
                    state1 = PAREMID2;
                    ++p;
                    continue;
                }
                if (o == ')') {
                    o = '0';
                    ++i;
                }
            }
            o = c;
        }
    }
    if (i < 0 || n < 0 || m < 0) {
        printf("negative number of errors\n");
        exit(printf("%d %d %d\n", i, n, m));
    }
    
    if (i >= 2 || i == 0)
        printf("%d parenthesis errors\n", i);
    else
        printf("%d parenthesis error\n", i);
    if (n >= 2 || n == 0)
        printf("%d bracket error(s)\n", n);
    else
        printf("%d bracket error\n", n);
    if (m >= 2 || n == 0)
        printf("%d braces error(s)\n", m);
    else
        printf("%d braces error\n", m);
}
