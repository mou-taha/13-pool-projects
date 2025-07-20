#!/bin/bash
cat /etc/passwd | cut -d: -f1-4,6- | awk 'NR%2==0' | cut -d ":" -f1 |rev| sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" |  awk '{print}' ORS=', ' |  sed 's/..$/\./' | xargs echo -n