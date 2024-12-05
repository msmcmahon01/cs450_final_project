Keytimes P25x, P25z;
void loadP25() {
	P25x.Init();
	P25x.AddTimeValue(0.0, -36);
	P25x.AddTimeValue(10.0, -40.5);
	P25x.AddTimeValue(8.125, -40.5);
	P25x.AddTimeValue(7.5, -40.5);
	P25x.AddTimeValue(6.875, -40.5);
	P25x.AddTimeValue(6.25, -40.5);
	P25x.AddTimeValue(5.625, -40.5);
	P25x.AddTimeValue(5.0, -40);
	P25x.AddTimeValue(4.375, -39.75);
	P25x.AddTimeValue(3.75, -39.75);
	P25x.AddTimeValue(3.125, -39.75);
	P25x.AddTimeValue(2.5, -39.75);
	P25x.AddTimeValue(1.875, -39.75);
	P25x.AddTimeValue(1.25, -36);
	P25x.AddTimeValue(0.625, -36);

	P25z.Init();
	P25z.AddTimeValue(0.0, -47.75);
	P25z.AddTimeValue(10.0, -17);
	P25z.AddTimeValue(8.125, -17);
	P25z.AddTimeValue(7.5, -17);
	P25z.AddTimeValue(6.875, -17);
	P25z.AddTimeValue(6.25, -20);
	P25z.AddTimeValue(5.625, -20);
	P25z.AddTimeValue(5.0, -14);
	P25z.AddTimeValue(4.375, -14);
	P25z.AddTimeValue(3.75, -14);
	P25z.AddTimeValue(3.125, -14);
	P25z.AddTimeValue(2.5, -22);
	P25z.AddTimeValue(1.875, -22);
	P25z.AddTimeValue(1.25, -26);
	P25z.AddTimeValue(0.625, -42);
}