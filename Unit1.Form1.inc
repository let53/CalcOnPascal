procedure InitializeComponent;
    begin
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.button6 := new System.Windows.Forms.Button();
        self.button7 := new System.Windows.Forms.Button();
        self.button8 := new System.Windows.Forms.Button();
        self.button9 := new System.Windows.Forms.Button();
        self.button10 := new System.Windows.Forms.Button();
        self.button11 := new System.Windows.Forms.Button();
        self.button12 := new System.Windows.Forms.Button();
        self.button13 := new System.Windows.Forms.Button();
        self.button14 := new System.Windows.Forms.Button();
        self.button15 := new System.Windows.Forms.Button();
        self.button16 := new System.Windows.Forms.Button();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 89);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(50, 50);
        self.button1.TabIndex := 0;
        self.button1.Text := '1';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(68, 89);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(50, 50);
        self.button2.TabIndex := 1;
        self.button2.Text := '2';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(124, 89);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(50, 50);
        self.button3.TabIndex := 2;
        self.button3.Text := '3';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(12, 145);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(50, 50);
        self.button4.TabIndex := 3;
        self.button4.Text := '4';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(68, 145);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(50, 50);
        self.button5.TabIndex := 4;
        self.button5.Text := '5';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // button6
        // 
        self.button6.Location := new System.Drawing.Point(124, 145);
        self.button6.Name := 'button6';
        self.button6.Size := new System.Drawing.Size(50, 50);
        self.button6.TabIndex := 5;
        self.button6.Text := '6';
        self.button6.UseVisualStyleBackColor := true;
        self.button6.Click += button6_Click;
        // 
        // button7
        // 
        self.button7.Location := new System.Drawing.Point(12, 201);
        self.button7.Name := 'button7';
        self.button7.Size := new System.Drawing.Size(50, 50);
        self.button7.TabIndex := 6;
        self.button7.Text := '7';
        self.button7.UseVisualStyleBackColor := true;
        self.button7.Click += button7_Click;
        // 
        // button8
        // 
        self.button8.Location := new System.Drawing.Point(68, 201);
        self.button8.Name := 'button8';
        self.button8.Size := new System.Drawing.Size(50, 50);
        self.button8.TabIndex := 7;
        self.button8.Text := '8';
        self.button8.UseVisualStyleBackColor := true;
        self.button8.Click += button8_Click;
        // 
        // button9
        // 
        self.button9.Location := new System.Drawing.Point(124, 201);
        self.button9.Name := 'button9';
        self.button9.Size := new System.Drawing.Size(50, 50);
        self.button9.TabIndex := 8;
        self.button9.Text := '9';
        self.button9.UseVisualStyleBackColor := true;
        self.button9.Click += button9_Click;
        // 
        // button10
        // 
        self.button10.Location := new System.Drawing.Point(68, 257);
        self.button10.Name := 'button10';
        self.button10.Size := new System.Drawing.Size(50, 50);
        self.button10.TabIndex := 9;
        self.button10.Text := '0';
        self.button10.UseVisualStyleBackColor := true;
        self.button10.Click += button10_Click;
        // 
        // button11
        // 
        self.button11.Location := new System.Drawing.Point(210, 89);
        self.button11.Name := 'button11';
        self.button11.Size := new System.Drawing.Size(50, 50);
        self.button11.TabIndex := 10;
        self.button11.Text := 'C';
        self.button11.UseVisualStyleBackColor := true;
        self.button11.Click += button11_Click;
        // 
        // button12
        // 
        self.button12.Location := new System.Drawing.Point(266, 89);
        self.button12.Name := 'button12';
        self.button12.Size := new System.Drawing.Size(50, 50);
        self.button12.TabIndex := 11;
        self.button12.Text := '=';
        self.button12.UseVisualStyleBackColor := true;
        self.button12.Click += button12_Click;
        // 
        // button13
        // 
        self.button13.Location := new System.Drawing.Point(210, 145);
        self.button13.Name := 'button13';
        self.button13.Size := new System.Drawing.Size(50, 50);
        self.button13.TabIndex := 12;
        self.button13.Text := '+';
        self.button13.UseVisualStyleBackColor := true;
        self.button13.Click += button13_Click;
        // 
        // button14
        // 
        self.button14.Location := new System.Drawing.Point(266, 145);
        self.button14.Name := 'button14';
        self.button14.Size := new System.Drawing.Size(50, 50);
        self.button14.TabIndex := 13;
        self.button14.Text := '-';
        self.button14.UseVisualStyleBackColor := true;
        self.button14.Click += button14_Click;
        // 
        // button15
        // 
        self.button15.Location := new System.Drawing.Point(210, 201);
        self.button15.Name := 'button15';
        self.button15.Size := new System.Drawing.Size(50, 50);
        self.button15.TabIndex := 14;
        self.button15.Text := '*';
        self.button15.UseVisualStyleBackColor := true;
        self.button15.Click += button15_Click;
        // 
        // button16
        // 
        self.button16.Location := new System.Drawing.Point(266, 201);
        self.button16.Name := 'button16';
        self.button16.Size := new System.Drawing.Size(50, 50);
        self.button16.TabIndex := 15;
        self.button16.Text := '/';
        self.button16.UseVisualStyleBackColor := true;
        self.button16.Click += button16_Click;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(12, 37);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(304, 20);
        self.textBox1.TabIndex := 16;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(376, 346);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.button16);
        self.Controls.Add(self.button15);
        self.Controls.Add(self.button14);
        self.Controls.Add(self.button13);
        self.Controls.Add(self.button12);
        self.Controls.Add(self.button11);
        self.Controls.Add(self.button10);
        self.Controls.Add(self.button9);
        self.Controls.Add(self.button8);
        self.Controls.Add(self.button7);
        self.Controls.Add(self.button6);
        self.Controls.Add(self.button5);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Calc';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
