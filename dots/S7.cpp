Keytimes S7x, S7z;
void loadS7() {
	S7x.Init();
	S7x.AddTimeValue(0.0, 17);
	S7x.AddTimeValue(10.0, 7.25);
	S7x.AddTimeValue(8.125, 7.25);
	S7x.AddTimeValue(7.5, 7.25);
	S7x.AddTimeValue(6.875, 7.25);
	S7x.AddTimeValue(6.25, 7.25);
	S7x.AddTimeValue(5.625, 7.25);
	S7x.AddTimeValue(5.0, 16);
	S7x.AddTimeValue(4.375, 14);
	S7x.AddTimeValue(3.75, 17);
	S7x.AddTimeValue(3.125, 17);
	S7x.AddTimeValue(2.5, 17);
	S7x.AddTimeValue(1.875, 17);
	S7x.AddTimeValue(1.25, 17);
	S7x.AddTimeValue(0.625, 17);

	S7z.Init();
	S7z.AddTimeValue(0.0, -44);
	S7z.AddTimeValue(10.0, -3.25);
	S7z.AddTimeValue(8.125, -3.25);
	S7z.AddTimeValue(7.5, -3.25);
	S7z.AddTimeValue(6.875, -3.25);
	S7z.AddTimeValue(6.25, -3.25);
	S7z.AddTimeValue(5.625, -3.25);
	S7z.AddTimeValue(5.0, -2);
	S7z.AddTimeValue(4.375, -2);
	S7z.AddTimeValue(3.75, -2);
	S7z.AddTimeValue(3.125, -2);
	S7z.AddTimeValue(2.5, -10);
	S7z.AddTimeValue(1.875, -10);
	S7z.AddTimeValue(1.25, -14);
	S7z.AddTimeValue(0.625, -30);
}