Keytimes C28x, C28z;
void loadC28() {
	C28x.Init();
	C28x.AddTimeValue(0.0, 30);
	C28x.AddTimeValue(10.0, 41.75);
	C28x.AddTimeValue(8.125, 41.75);
	C28x.AddTimeValue(7.5, 41.75);
	C28x.AddTimeValue(6.875, 41.75);
	C28x.AddTimeValue(6.25, 41);
	C28x.AddTimeValue(5.625, 41);
	C28x.AddTimeValue(5.0, 40);
	C28x.AddTimeValue(4.375, 34.25);
	C28x.AddTimeValue(3.75, 34.25);
	C28x.AddTimeValue(3.125, 34.25);
	C28x.AddTimeValue(2.5, 34.25);
	C28x.AddTimeValue(1.875, 34.25);
	C28x.AddTimeValue(1.25, 30);
	C28x.AddTimeValue(0.625, 30);

	C28z.Init();
	C28z.AddTimeValue(0.0, -49.5);
	C28z.AddTimeValue(10.0, -16.75);
	C28z.AddTimeValue(8.125, -16.75);
	C28z.AddTimeValue(7.5, -16.75);
	C28z.AddTimeValue(6.875, -16.75);
	C28z.AddTimeValue(6.25, -17);
	C28z.AddTimeValue(5.625, -17);
	C28z.AddTimeValue(5.0, -18);
	C28z.AddTimeValue(4.375, -14);
	C28z.AddTimeValue(3.75, -14);
	C28z.AddTimeValue(3.125, -14);
	C28z.AddTimeValue(2.5, -22);
	C28z.AddTimeValue(1.875, -22);
	C28z.AddTimeValue(1.25, -34);
	C28z.AddTimeValue(0.625, -43.5);
}