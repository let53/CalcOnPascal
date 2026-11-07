Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
var n1, n2: real;
var znak: char;
var res: real;
type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
    procedure button6_Click(sender: Object; e: EventArgs);
    procedure button7_Click(sender: Object; e: EventArgs);
    procedure button8_Click(sender: Object; e: EventArgs);
    procedure button9_Click(sender: Object; e: EventArgs);
    procedure button10_Click(sender: Object; e: EventArgs);
    procedure button11_Click(sender: Object; e: EventArgs);
    procedure button13_Click(sender: Object; e: EventArgs);
    procedure button14_Click(sender: Object; e: EventArgs);
    procedure button15_Click(sender: Object; e: EventArgs);
    procedure button16_Click(sender: Object; e: EventArgs);
    procedure button12_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    button2: Button;
    button3: Button;
    button4: Button;
    button5: Button;
    button6: Button;
    button7: Button;
    button8: Button;
    button9: Button;
    button10: Button;
    button11: Button;
    button12: Button;
    button13: Button;
    button14: Button;
    button15: Button;
    textBox1: TextBox;
    button16: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '1';
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '2';
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '3';
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '4';
end;

procedure Form1.button5_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '5';
end;

procedure Form1.button6_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '6';
end;

procedure Form1.button7_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '7';
end;

procedure Form1.button8_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '8';
end;

procedure Form1.button9_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '9';
end;

procedure Form1.button10_Click(sender: Object; e: EventArgs);
begin
  textbox1.Text := textbox1.Text + '0';
end;

procedure Form1.button11_Click(sender: Object; e: EventArgs);
begin
  textbox1.Clear;
  znak := ' ';
  n1 := 0;
  n2 := 0;
end;

procedure Form1.button13_Click(sender: Object; e: EventArgs);
begin
  n1 := textbox1.Text.ToReal;
  textbox1.Clear;
  znak := '+';
end;

procedure Form1.button14_Click(sender: Object; e: EventArgs);
begin
  n1 := textbox1.Text.ToReal;
  textbox1.Clear;
  znak := '-';
end;

procedure Form1.button15_Click(sender: Object; e: EventArgs);
begin
  n1 := textbox1.Text.ToReal;
  textbox1.Clear;
  znak := '*';
end;

procedure Form1.button16_Click(sender: Object; e: EventArgs);
begin
  n1 := textbox1.Text.ToReal;
  textbox1.Clear;
  znak := '/';
end;

procedure Form1.button12_Click(sender: Object; e: EventArgs);
begin
  n2 := textbox1.Text.ToReal;
  textbox1.Clear;
  case znak of
    '+': res := n1 + n2;
    '-': res := n1 - n2;
    '*': res := n1 * n2;
    '/': res := n1 / n2;
  end;
  textbox1.Text := res.ToString;
  
end;

end.
