Keytimes A8x, A8z;
float startx = 48, startz = 42;
void loadA8() {
	A8x.Init();
	A8x.AddTimeValue(0.0, startx);
	A8x.AddTimeValue(10.0, startx + 11.25);
	A8x.AddTimeValue(8.125, startx + 11.25);
	A8x.AddTimeValue(7.5, startx + 9);
	A8x.AddTimeValue(6.875, startx + 6.5);
	A8x.AddTimeValue(6.25, startx + 4);
	A8x.AddTimeValue(5.625, startx + 4);
	A8x.AddTimeValue(5.0, startx - 4);
	A8x.AddTimeValue(4.375, startx - 4);
	A8x.AddTimeValue(3.75, startx - 4);
	A8x.AddTimeValue(3.125, startx - 4);
	A8x.AddTimeValue(2.5, startx + 4);
	A8x.AddTimeValue(1.875, startx + 4);
	A8x.AddTimeValue(1.25, startx);
	A8x.AddTimeValue(0.625, startx);

	A8z.Init();
	A8z.AddTimeValue(0.0, startz);
	A8z.AddTimeValue(10.0, startz - 16 - 16 - 16 + 8 + 7 + 1.5 + 1.5 + 1.25);
	A8z.AddTimeValue(8.125, startz - 16 - 16 - 16 + 8 + 7 + 1.5 + 1.5 + 1.25);
	A8z.AddTimeValue(7.5, startz - 16 - 16 - 16 + 8 + 7 + 1.5 + 1.5);
	A8z.AddTimeValue(6.875, startz - 16 - 16 - 16 + 8 + 7 + 1.5);
	A8z.AddTimeValue(6.25, startz - 16 - 16 - 16 + 8 + 7);
	A8z.AddTimeValue(5.625, startz - 16 - 16 - 16 + 8 + 7);
	A8z.AddTimeValue(5.0, startz - 16 - 16 - 16 + 8);
	A8z.AddTimeValue(4.375, startz - 16 - 16 - 16);
	A8z.AddTimeValue(3.75, startz - 16 - 16 - 16);
	A8z.AddTimeValue(3.125, startz - 16 - 16 - 16);
	A8z.AddTimeValue(2.5, startz - 16 - 16 - 16);
	A8z.AddTimeValue(1.875, startz - 16 - 16 - 16);
	A8z.AddTimeValue(1.25, startz - 16 - 16);
	A8z.AddTimeValue(0.625, startz - 16);
}