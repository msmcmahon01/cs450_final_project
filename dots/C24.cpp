Keytimes C24x, C24z;
void loadC24() {
	C24x.Init();
	C24x.AddTimeValue(0.0, 48);
	C24x.AddTimeValue(10.0, 50.75);
	C24x.AddTimeValue(8.125, 50.75);
	C24x.AddTimeValue(7.5, 50.75);
	C24x.AddTimeValue(6.875, 50.75);
	C24x.AddTimeValue(6.25, 53);
	C24x.AddTimeValue(5.625, 53);
	C24x.AddTimeValue(5.0, 56);
	C24x.AddTimeValue(4.375, 55.75);
	C24x.AddTimeValue(3.75, 55.75);
	C24x.AddTimeValue(3.125, 55.75);
	C24x.AddTimeValue(2.5, 55.75);
	C24x.AddTimeValue(1.875, 55.75);
	C24x.AddTimeValue(1.25, 48);
	C24x.AddTimeValue(0.625, 48);

	C24z.Init();
	C24z.AddTimeValue(0.0, -47.75);
	C24z.AddTimeValue(10.0, -16.75);
	C24z.AddTimeValue(8.125, -16.75);
	C24z.AddTimeValue(7.5, -16.75);
	C24z.AddTimeValue(6.875, -16.75);
	C24z.AddTimeValue(6.25, -19);
	C24z.AddTimeValue(5.625, -19);
	C24z.AddTimeValue(5.0, -18);
	C24z.AddTimeValue(4.375, -14);
	C24z.AddTimeValue(3.75, -14);
	C24z.AddTimeValue(3.125, -14);
	C24z.AddTimeValue(2.5, -22);
	C24z.AddTimeValue(1.875, -22);
	C24z.AddTimeValue(1.25, -26);
	C24z.AddTimeValue(0.625, -42);
}