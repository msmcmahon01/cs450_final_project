Keytimes X12x, X12z;
void loadX12() {
	X12x.Init();
	X12x.AddTimeValue(0.0, -72);
	X12x.AddTimeValue(10.0, -64);
	X12x.AddTimeValue(8.125, -64);
	X12x.AddTimeValue(7.5, -64);
	X12x.AddTimeValue(6.875, -67);
	X12x.AddTimeValue(6.25, -70);
	X12x.AddTimeValue(5.625, -70);
	X12x.AddTimeValue(5.0, -66);
	X12x.AddTimeValue(4.375, -74.25);
	X12x.AddTimeValue(3.75, -74.25);
	X12x.AddTimeValue(3.125, -74.25);
	X12x.AddTimeValue(2.5, -74.25);
	X12x.AddTimeValue(1.875, -74.25);
	X12x.AddTimeValue(1.25, -72);
	X12x.AddTimeValue(0.625, -72);

	X12z.Init();
	X12z.AddTimeValue(0.0, -47.75);
	X12z.AddTimeValue(10.0, -9);
	X12z.AddTimeValue(8.125, -9);
	X12z.AddTimeValue(7.5, -9);
	X12z.AddTimeValue(6.875, -11.5);
	X12z.AddTimeValue(6.25, -14);
	X12z.AddTimeValue(5.625, -14);
	X12z.AddTimeValue(5.0, -14);
	X12z.AddTimeValue(4.375, -14);
	X12z.AddTimeValue(3.75, -14);
	X12z.AddTimeValue(3.125, -14);
	X12z.AddTimeValue(2.5, -22);
	X12z.AddTimeValue(1.875, -22);
	X12z.AddTimeValue(1.25, -26);
	X12z.AddTimeValue(0.625, -42);
}