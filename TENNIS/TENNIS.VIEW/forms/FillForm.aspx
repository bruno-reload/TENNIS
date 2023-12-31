﻿<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="FillForm.aspx.cs" Inherits="TENNIS.VIEW.forms.FillForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <asp:Label ID="Label1" runat="server" Text="id"></asp:Label>
        <asp:TextBox ID="id" runat="server"></asp:TextBox>
    
    </div>
        <p>
            <asp:Label ID="Label3" runat="server" Text="posição"></asp:Label>
            <asp:TextBox ID="position" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label2" runat="server" Text="nickname"></asp:Label>
            <asp:TextBox ID="nickname" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label4" runat="server" Text="id team"></asp:Label>
            <asp:TextBox ID="team" runat="server"></asp:TextBox>
        </p>
        <asp:GridView ID="grid" runat="server" AutoGenerateColumns="False">
            <Columns>
                <asp:BoundField DataField="Id" HeaderText="Id" />
                <asp:BoundField DataField="position" HeaderText="position" />
                <asp:BoundField DataField="team" HeaderText="team id" />
                <asp:BoundField DataField="player" HeaderText="nikname" />
            </Columns>
        </asp:GridView>
        <p>
            <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="insere" />
            <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="altera" />
            <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" Text="exclue" />
            <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="lista" />
            <asp:Button ID="Button5" runat="server" OnClick="Button5_Click" Text="return" />
        </p>
    </form>
</body>
</html>
