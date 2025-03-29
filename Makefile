C_SOURCE=$(wildcard *.c)
C_EXE = $(C_SOURCE:.c=.exe)

%.exe: %.c
	gcc -o $@ $<

media: media.exe
	./$<

circle: circle_area.exe
	./$<

area: triangle_area.exe
	./$<

switch: switch_variables.exe
	./$<

clean: $(C_EXE)
	$(RM) $^