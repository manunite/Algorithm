//
//  no_1004.cpp
//  Acmicpc
//
//  Created by heogj123 on 2022/07/05.
//

#include "no_1004.hpp"
#include <stdio.h>

void no_1004::func() {
  // insert code here...
  
  int n;
  scanf("%d", &n);
  
  for(int i=0; i<n; i++) {
    int answer = 0;
    int x1,y1,x2,y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    int count;
    scanf("%d", &count);
    
    for(int j=0; j<count; j++) {
      int cx,cy,r;
      scanf("%d %d %d", &cx, &cy, &r);
      int distance1 = (x1-cx) * (x1-cx) + (y1-cy) * (y1-cy);
      int distance2 = (x2-cx) * (x2-cx) + (y2-cy) * (y2-cy);
      
      bool flag1 = distance1 > r * r ? true : false;
      bool flag2 = distance2 > r * r ? true : false;
      
      if (flag1 != flag2) {
        answer += 1;
      }
    }
    printf("%d\n", answer);
  }
}
