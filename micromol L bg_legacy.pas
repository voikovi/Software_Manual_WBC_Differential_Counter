program klirans36;
const
Z=1.23;
W=1.04;
var
G,K,F,C: real;
P:byte;

Begin
writeln('__      __ ______ ____   ________ __       ___   _____ ');
writeln('__ _  _ __ __     __  __    __    __     __   __ __  __ ');
writeln('__  __  __ _____  __  __    __    __     _______ ____ ');
writeln('__      __ __     __  __    __    __     __   __ __  __ ');
writeln('__      __ ______ ____   ________ ______ __   __ _____ ');
write('������ :');
read(G);
write('�����ࠬ� :');
read(K);
write('�ॠ⨭�� (micromol/L) :');
read(F);
write('�� �� ������ 1, �� ���� ������ 2. ��� (1/2) :');
read(P);
If P=1 Then
 Begin
 writeln('��� ������ ��.');
 readln;
 End
Else
 If P=2 Then
 Begin
 writeln('��� ������ ����.');
 readln;
 End;
If P=1 Then
 Begin
 C:=((140-G)*K*Z)/F;
  writeln('___________________________________________');
 write('������(micromol/L)=',C:10:2);
 readln;
 End
Else
 If P=2 Then
 Begin
 C:=((140-G)*K*W)/F;
  writeln('___________________________________________');
 write('������(micromol/L)=',C:10:2);
 readln;
 End
 Else Begin
 write('��誠');
 readln;
 End;
readln;
end.


