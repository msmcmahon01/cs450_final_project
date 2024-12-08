Keytimes S7x, S7z;
void loadS7() {
	S7x.Init();
	S7x.AddTimeValue(t0, 17);
	S7x.AddTimeValue(t14, 7.25);
	S7x.AddTimeValue(t13, 7.25);
	S7x.AddTimeValue(t12, 7.25);
	S7x.AddTimeValue(t11, 7.25);
	S7x.AddTimeValue(t10, 7.25);
	S7x.AddTimeValue(t9, 7.25);
	S7x.AddTimeValue(t8, 16);
	S7x.AddTimeValue(t7, 14);
	S7x.AddTimeValue(t6, 17);
	S7x.AddTimeValue(t5, 17);
	S7x.AddTimeValue(t4, 17);
	S7x.AddTimeValue(t3, 17);
	S7x.AddTimeValue(t2, 17);
	S7x.AddTimeValue(t1, 17);

	S7z.Init();
	S7z.AddTimeValue(t0, -44);
	S7z.AddTimeValue(t14, -3.25);
	S7z.AddTimeValue(t13, -3.25);
	S7z.AddTimeValue(t12, -3.25);
	S7z.AddTimeValue(t11, -3.25);
	S7z.AddTimeValue(t10, -3.25);
	S7z.AddTimeValue(t9, -3.25);
	S7z.AddTimeValue(t8, -2);
	S7z.AddTimeValue(t7, -2);
	S7z.AddTimeValue(t6, -2);
	S7z.AddTimeValue(t5, -2);
	S7z.AddTimeValue(t4, -10);
	S7z.AddTimeValue(t3, -10);
	S7z.AddTimeValue(t2, -14);
	S7z.AddTimeValue(t1, -30);
}