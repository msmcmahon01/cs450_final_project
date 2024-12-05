Keytimes S5x, S5z;
void loadS5() {
	S5x.Init();
	S5x.AddTimeValue(0.0, 13);
	S5x.AddTimeValue(10.0, 3.75);
	S5x.AddTimeValue(8.125, 3.75);
	S5x.AddTimeValue(7.5, 3.75);
	S5x.AddTimeValue(6.875, 3.75);
	S5x.AddTimeValue(6.25, 3.75);
	S5x.AddTimeValue(5.625, 3.75);
	S5x.AddTimeValue(5.0, 12);
	S5x.AddTimeValue(4.375, 14);
	S5x.AddTimeValue(3.75, 13);
	S5x.AddTimeValue(3.125, 13);
	S5x.AddTimeValue(2.5, 13);
	S5x.AddTimeValue(1.875, 13);
	S5x.AddTimeValue(1.25, 13);
	S5x.AddTimeValue(0.625, 13);

	S5z.Init();
	S5z.AddTimeValue(0.0, -44);
	S5z.AddTimeValue(10.0, -1.25);
	S5z.AddTimeValue(8.125, -1.25);
	S5z.AddTimeValue(7.5, -1.25);
	S5z.AddTimeValue(6.875, -1.25);
	S5z.AddTimeValue(6.25, -1.25);
	S5z.AddTimeValue(5.625, -1.25);
	S5z.AddTimeValue(5.0, -2);
	S5z.AddTimeValue(4.375, -6);
	S5z.AddTimeValue(3.75, -2);
	S5z.AddTimeValue(3.125, -2);
	S5z.AddTimeValue(2.5, -10);
	S5z.AddTimeValue(1.875, -10);
	S5z.AddTimeValue(1.25, -14);
	S5z.AddTimeValue(0.625, -30);
}