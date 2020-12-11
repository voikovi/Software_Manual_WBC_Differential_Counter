program klirans36;
const
Z=1.00;
W=0.85;
var
G,K,F,C: real;
P:byte;

Begin
writeln('__      __ ______ ____   ________ __       ___   _____ ');
writeln('__ _  _ __ __     __  __    __    __     __   __ __  __ ');
writeln('__  __  __ _____  __  __    __    __     _______ ____ ');
writeln('__      __ __     __  __    __    __     __   __ __  __ ');
writeln('__      __ ______ ____   ________ ______ __   __ _____ ');
write('Години :');
read(G);
write('Килограми :');
read(K);
write('Креатинин (mg/dL) :');
read(F);
write('За мъж изберете 1, за жена изберете 2. Пол (1/2) :');
read(P);
If P=1 Then
 Begin
 writeln('Вие избрахте мъж.');
 readln;
 End
Else
 If P=2 Then
 Begin
 writeln('Вие избрахте жена.');
 readln;
 End;
If P=1 Then
 Begin
 C:=((140-G)*K*Z)/(72*F);
  writeln('___________________________________________');
 write('Клирънс(mg/dL)=',C:10:2);
 readln;
 End
Else
 If P=2 Then
 Begin
 C:=((140-G)*K*W)/(72*F);
  writeln('___________________________________________');
 write('Клирънс(mg/dL)=',C:10:2);
 readln;
 End
 Else Begin
 write('Грешка');
 readln;
 End;
readln;
end.


