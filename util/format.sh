for
  i in `ls`;
do
  cp $i tmp.$i.c;
clang - format tmp.$i.c > $i;
done;
rm tmp.*;
