namespace A20240323_03
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void button_Guess_Click(object sender, EventArgs e)
        {
            int iPlayerGuessValue = int.Parse(textBox_PlayerGuess.Text);
            int iPcAnsValue = int.Parse(label_PcAns.Text);
            if (iPlayerGuessValue == iPcAnsValue)
            {
                MessageBox.Show("You Lose!");
            }
            else if (iPlayerGuessValue < iPcAnsValue)
            {
                label_Mini.Text = iPlayerGuessValue.ToString();
                MessageBox.Show("Try Again!");
            }
            else
            {
                label_Max.Text = iPlayerGuessValue.ToString();
                MessageBox.Show("Try Again!");
            }
        }

        private void vGameInitialize()
        {
            label_PcAns.Text = "";
            Random rDice = new Random();
            label_PcAns.Text = rDice.Next(1, 10000).ToString();
            textBox_PlayerGuess.Text = "";
            label_Mini.Text = "";
            label_Max.Text = "";
        }

        private void button_Replay_Click(object sender, EventArgs e)
        {
            this.vGameInitialize();
        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            this.vGameInitialize();
        }
    }
}
