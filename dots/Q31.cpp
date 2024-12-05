Keytimes Q31x, Q31z;
void loadQ31() {
	Q31x.Init();
	Q31x.AddTimeValue(0.0, -20);
	Q31x.AddTimeValue(10.0, -18.75);
	Q31x.AddTimeValue(8.125, -18.75);
	Q31x.AddTimeValue(7.5, -18.75);
	Q31x.AddTimeValue(6.875, -19);
	Q31x.AddTimeValue(6.25, -19);
	Q31x.AddTimeValue(5.625, -19);
	Q31x.AddTimeValue(5.0, -20);
	Q31x.AddTimeValue(4.375, -24);
	Q31x.AddTimeValue(3.75, -20);
	Q31x.AddTimeValue(3.125, -20);
	Q31x.AddTimeValue(2.5, -20);
	Q31x.AddTimeValue(1.875, -20);
	Q31x.AddTimeValue(1.25, -20);
	Q31x.AddTimeValue(0.625, -20);

	Q31z.Init();
	Q31z.AddTimeValue(0.0, -42);
	Q31z.AddTimeValue(10.0, 10.75);
	Q31z.AddTimeValue(8.125, 10.75);
	Q31z.AddTimeValue(7.5, 9.5);
	Q31z.AddTimeValue(6.875, 8.25);
	Q31z.AddTimeValue(6.25, 7);
	Q31z.AddTimeValue(5.625, 7);
	Q31z.AddTimeValue(5.0, 6);
	Q31z.AddTimeValue(4.375, 2);
	Q31z.AddTimeValue(3.75, 2);
	Q31z.AddTimeValue(3.125, 2);
	Q31z.AddTimeValue(2.5, -6);
	Q31z.AddTimeValue(1.875, -6);
	Q31z.AddTimeValue(1.25, -10);
	Q31z.AddTimeValue(0.625, -26);
}