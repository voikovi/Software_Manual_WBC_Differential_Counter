program ime;
var
A,B,C,D,i:real;

Begin
writeln('--      ----     -- ');
writeln('--      --  --   -- ');
writeln('--      --  --   -- ');
writeln('--      --  --   -- ');
writeln('------  ----     ------ ');
write('Холестерол :');
read(A);
write('Tg :');
read(B);
write('HDL :');
read(C);
D:=A-((B/2.5)+C);
writeln('_____________________________________________');
write('LDL=',D:10:2);
readln;
readln;
end.
