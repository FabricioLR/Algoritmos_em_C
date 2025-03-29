C_SOURCE=$(wildcard *.c)
C_EXE = $(C_SOURCE:.c=.exe)

%.exe: $(C_SOURCE)
	gcc -o $@ $<

media: media.exe
	./$<

circle: circle_radius.exe
	./$<

area: triangle_area.exe
	./$<

switch: switch_variables.exe
	./$<

clean: $(C_EXE)
	$(RM) $^